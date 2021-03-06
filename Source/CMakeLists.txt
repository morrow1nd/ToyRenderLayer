# 
# ToyRenderLayer/Source
# 

## CMake Options

### TRL Debug Mode
option(OPTION_TRL_MORE_RUNTIME_CHECK
	"Open more TRL runtime checking" ON)
if(OPTION_TRL_MORE_RUNTIME_CHECK)
	set(TRL_MORE_RUNTIME_CHECK "1")
else()
	set(TRL_MORE_RUNTIME_CHECK "0")
endif()


### ToyUtility Path
set(OPTION_TOY_UTILITY_PATH "${PROJECT_SOURCE_DIR}/../ToyUtility" CACHE PATH "path/to/ToyUtility" FORCE)

### ToyXWindow Path
set(OPTION_TOY_XWINDOW_PATH "${PROJECT_SOURCE_DIR}/../ToyXWindow" CACHE PATH "path/to/ToyXWindow" FORCE)


### RenderAPI to use
set(TRL_DX11         "(1 << 0)")
set(TRL_OPENGL       "(1 << 1)")
set(TRL_OPENGLES     "(1 << 2)")

set(OPTION_TRL_RENDER_API "OpenGL" CACHE STRING "Render API to use.")
set_property(CACHE OPTION_TRL_RENDER_API PROPERTY STRINGS "OpenGL" "DirectX 11" "OpenGL ES")

if(OPTION_TRL_RENDER_API MATCHES "DirectX 11")
    set(TRL_USING_DX11 TRUE)
    set(TRL_RENDER_API ${TRL_DX11})
elseif(OPTION_TRL_RENDER_API MATCHES "OpenGL")
    set(TRL_USING_OPENGL TRUE)
    set(TRL_RENDER_API ${TRL_OPENGL})
else()
    set(TRL_USING_OPENGLES TRUE)
    set(TRL_RENDER_API ${TRL_OPENGLES})
endif()

## end of CMake Options

## Third Party Libs
ADD_SUBDIRECTORY(ThirdParty)

## Configure file
CONFIGURE_FILE(
    "${TRL_SOURCE_DIR}/TRLConfig.h.in"
    "${PROJECT_BINARY_DIR}/TRLConfig.h"
    )

## load ToyUtility project
ADD_SUBDIRECTORY(${OPTION_TOY_UTILITY_PATH} ToyUtility.out)


# Source files and their filters
INCLUDE(CMakeSources.cmake)


INCLUDE_DIRECTORIES(
    ${TOY_UTILITY_INCLUDE_PATHS}

    ${TRL_INCLUDE_DIR}
    ${PROJECT_BINARY_DIR}
	${TRL_DEPS_INCLUDE}
	${TRL_THIRD_PARTY_INCLUDE_GLFW}
)

if(TOY_WINDOWS AND TRL_USING_DX11)
set(TOY_WINDOW_DX11_EXTRN_LIB
	d3d11
	d3dcompiler
	dxguid
	dxgi
)
endif()

ADD_LIBRARY(TRL
    ${TRL_SRC}
    TRLConfig.h.in
)
TARGET_LINK_LIBRARIES(TRL
	${TOY_UTILITY_LIBRARIES}
	${TOY_WINDOW_DX11_EXTRN_LIB}
)


# IDE specific
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS TRUE)
SET_PROPERTY(TARGET TRL PROPERTY FOLDER Libs)


## For lib user
SET(TRL_INCLUDE_PATHS
    ${TOY_UTILITY_INCLUDE_PATHS}
    ${TRL_INCLUDE_DIR}
    ${PROJECT_BINARY_DIR}
    ${TRL_DEPS_INCLUDE}
    ${TRL_THIRD_PARTY_INCLUDE_GLFW}
    CACHE INTERNAL "TRL INCLUDE PATHS"
)

SET(TRL_LIBRARIES
    TRL
    ${TOY_UTILITY_LIBRARIES}
	${TOY_WINDOW_DX11_EXTRN_LIB}
    CACHE INTERNAL "TRL Librarys"
)