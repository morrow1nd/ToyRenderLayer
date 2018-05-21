#include "ToyUtility/Prerequisites/PreDefine.h"
#include "TRL/RenderAPI.h"
#include "TRL/GpuBuffer.h"
#include "TRL/AttributeData.h"
#include "TRL/AttributeVariable.h"
#include "TRL/GpuProgram.h"
#include "TRL/GpuShader.h"
#include <cstdlib>
#include "GLFW/glfw3.h"
#include <iostream>

#include "ToyUtility/DataStream/MemoryDataStream.h"
#include "TRL/TRLSL/DebugGenerator.h"
#include "TRL/TRLSL/GLSLGenerator.h"
#include "TRL/TRLSL/TRLSLParser.h"
#include "TRL/TRLSL/TRLSLTokener.h"


using namespace ToyUtility;
using namespace TRL;

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}


int main()
{
    const ToyUtility::String code = R"(

uniform vec4 Pos;

void main()
{
    Pos = vec4(1, 2, 3, 4);
    if(1 == Pos.x)
    {
        Pos.y = 4;
    }
}

)";

    TRL::TRLSLTokener tokener;
    bool res = tokener.Prepare(MemoryDataStream((void*)code.c_str(), code.size() + 1, false));
    if (!res)
    {
        std::cout << "tokener: " << tokener.GetError().ErrorInfo << std::endl;
        return 2;
    }

    {
        MemoryDataStream stream(1024);

        //DebugGenerator generator;
        GLSLGenerator generator;

        TRLSLParser parser(generator);
        parser.Parse(tokener);
        generator.GenerateCode(stream);
        std::cout << stream.GetAsString() << std::endl;
    }
    
    std::cout << "end" << std::endl;
    system("pause");
    return 3;

    // glfw: initialize and configure
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "Triangle Example", NULL, NULL);
    if (window == NULL)
    {
        // TODO: showErrorMsgBox(...)
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // glad: load all OpenGL function pointers
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        // TODO: showErrorMsgBox(...)
        // std::cout << "Failed to initialize GLAD" << std::endl;
        return -2;
    }

    float vertices[] = {
        0.5f,  0.5f, 0.0f, 1.0f, 0.0f, 0.0f,  // top right
        0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,  // bottom right
        -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f,  // bottom left
        -0.5f,  0.5f, 0.0f, 1.0f, 1.0f, 1.0f,  // top left 
    };
    unsigned int indices[] = {  // note that we start from 0!
        0, 1, 3,  // first Triangle
        //1, 2, 3   // second Triangle
    };
    const char *vertexShaderSource = R"(
#version 330 core

in vec3 aPos;
in vec3 aColor;

out vec3 Color;
void main()
{
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
    Color = aColor;
}
)";
    const char *fragmentShaderSource = R"(
#version 330 core
in vec3 Color;

out vec4 FragColor;
void main()
{
    //FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);
    FragColor = vec4(Color.x, Color.y, Color.z, 1.0f);
}
)";

    GpuShader vertShader, fragShader;
    vertShader.Init(vertexShaderSource, GpuShaderType::GPU_VERTEX_SHADER);
    if (vertShader.IsCompiledSucc() == false)
    {
        std::cout << "vert: " + vertShader.GetCompileLogInfo() << std::endl;
    }

    fragShader.Init(fragmentShaderSource, GpuShaderType::GPU_FRAGMENT_SHADER);
    if (fragShader.IsCompiledSucc() == false)
    {
        std::cout << "frag: " + fragShader.GetCompileLogInfo() << std::endl;
    }

    GpuProgram program;
    program.Init(vertShader, fragShader);

    // Prepare data
    GpuBuffer vbo;
    vbo.Init();
    vbo.Bind(GPU_ARRAY_BUFFER);
    vbo.UploadData(vertices, 24 * sizeof(GpuFloat), GpuBufferDataType::GPU_STATIC_DRAW);

    GpuBuffer ebo;
    ebo.Init();
    ebo.Bind(GPU_ELEMENT_ARRAY_BUFFER);
    ebo.UploadData(indices, 3 * sizeof(GpuUInt), GpuBufferDataType::GPU_STATIC_DRAW);

    AttributeData attrib;
    attrib.Init();
    attrib.Active();
    auto var = program.FindAttribute("aPos");
    auto aColor = program.FindAttribute("aColor");
    if (var == AttributeVariable::None || aColor == AttributeVariable::None)
    {
        std::cout << "can't find ...";
        return -3;
    }

    attrib.SetAttributeArray(var, vbo, 3, GPU_FLOAT, false, 6*sizeof(float), 0);
    attrib.SetAttributeArray(aColor, vbo, 3, GPU_FLOAT, false, 6*sizeof(float), 3 * sizeof(float));
    attrib.SetIndicesBuffer(ebo, 3, GPU_UNSIGNED_INT);
    attrib.Inactive();
    
    RenderAPI renderAPI;

    while (true)
    {
        attrib.Active();
        renderAPI.ActiveGpuProgram(program);
        renderAPI.DrawIndices(GpuPrimitiveType::GPU_TRIANGLES, attrib, 0);

        glfwSwapBuffers(window);
        glfwPollEvents();

        Sleep(100); // 0.1 second
        //std::cout << "-" << std::endl;
    }

    system("pause");
    return 0;
}