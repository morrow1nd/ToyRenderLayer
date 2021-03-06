#include "TRL/details/TRLSL/DebugGenerator.h"
#include "ToyUtility/Log/Logger.h"


namespace TRL
{


void DebugGenerator::Log(const ToyUtility::String& info)
{
    TOY_RAW_LOG << info << std::endl;
}

void DebugGenerator::SyntaxError()
{
    Log("SyntaxError");
}

void DebugGenerator::ParseFailure()
{
    Log("ParseFailure");
}

void DebugGenerator::StackOverflow()
{
    Log("StackOverflow");
}

void DebugGenerator::ParseAccept()
{
    Log("ParseAccept");
}

TRLSLGenerator::RetType DebugGenerator::variable_identifier__To__IDENTIFIER(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__variable_identifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__INTCONSTANT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__UINTCONSTANT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__FLOATCONSTANT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__BOOLCONSTANT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::primary_expression__To__LS___expression___RS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__primary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__postfix_expression___LM___integer_expression___RM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__function_call(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__postfix_expression___DOT___FIELD_SELECTION(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__postfix_expression___INC_OP(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::postfix_expression__To__postfix_expression___DEC_OP(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::integer_expression__To__expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call__To__function_call_or_method(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_or_method__To__function_call_generic(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_generic__To__function_call_header_with_parameters___RS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_generic__To__function_call_header_no_parameters___RS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_header_no_parameters__To__function_call_header___VOID(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_header_no_parameters__To__function_call_header(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_header_with_parameters__To__function_call_header___assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_header_with_parameters__To__function_call_header_with_parameters___COMMA___assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_call_header__To__function_identifier___LS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_identifier__To__type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_identifier__To__postfix_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_expression__To__postfix_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_expression__To__INC_OP___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_expression__To__DEC_OP___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_expression__To__unary_operator___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_operator__To__PLUS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_operator__To__DASH(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_operator__To__BANG(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::unary_operator__To__TILDE(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::multiplicative_expression__To__unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::multiplicative_expression__To__multiplicative_expression___STAR___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::multiplicative_expression__To__multiplicative_expression___SLASH___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::multiplicative_expression__To__multiplicative_expression___PERCENT___unary_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::additive_expression__To__multiplicative_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::additive_expression__To__additive_expression___PLUS___multiplicative_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::additive_expression__To__additive_expression___DASH___multiplicative_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::shift_expression__To__additive_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::shift_expression__To__shift_expression___LEFT_OP___additive_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::shift_expression__To__shift_expression___RIGHT_OP___additive_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::relational_expression__To__shift_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::relational_expression__To__relational_expression___LEFT_ANGLE___shift_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::relational_expression__To__relational_expression___RIGHT_ANGLE___shift_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::relational_expression__To__relational_expression___LE_OP___shift_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::relational_expression__To__relational_expression___GE_OP___shift_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::equality_expression__To__relational_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::equality_expression__To__equality_expression___EQ_OP___relational_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::equality_expression__To__equality_expression___NE_OP___relational_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::and_expression__To__equality_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::and_expression__To__and_expression___AMPERSAND___equality_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::exclusive_or_expression__To__and_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::exclusive_or_expression__To__exclusive_or_expression___CARET___and_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::inclusive_or_expression__To__exclusive_or_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::inclusive_or_expression__To__inclusive_or_expression___VERTICAL_BAR___exclusive_or_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::logical_and_expression__To__inclusive_or_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::logical_and_expression__To__logical_and_expression___AND_OP___inclusive_or_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::logical_or_expression__To__logical_and_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::logical_or_expression__To__logical_or_expression___OR_OP___logical_and_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::conditional_expression__To__logical_or_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::conditional_expression__To__logical_or_expression___QUESTION___expression___COLON___assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_expression__To__conditional_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_expression__To__unary_expression___assignment_operator___assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__EQUAL(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__MUL_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__DIV_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__MOD_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__ADD_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__SUB_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__LEFT_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__RIGHT_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__AND_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__XOR_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::assignment_operator__To__OR_ASSIGN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::expression__To__assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::expression__To__expression___COMMA___assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::constant_expression__To__conditional_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::declaration__To__init_declarator_list___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_prototype__To__function_declarator___RS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_declarator__To__function_header(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_declarator__To__function_header_with_parameters(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_header_with_parameters__To__function_header___parameter_declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_header_with_parameters__To__function_header_with_parameters___COMMA___parameter_declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_header__To__fully_specified_type___IDENTIFIER___LS(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declarator__To__type_specifier___IDENTIFIER(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declarator__To__type_specifier___IDENTIFIER___array_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declaration__To__type_qualifier___parameter_declarator(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declaration__To__parameter_declarator(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declaration__To__type_qualifier___parameter_type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_declaration__To__parameter_type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::parameter_type_specifier__To__type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::init_declarator_list__To__single_declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::init_declarator_list__To__init_declarator_list___COMMA___IDENTIFIER(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::init_declarator_list__To__init_declarator_list___COMMA___IDENTIFIER___array_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::init_declarator_list__To__init_declarator_list___COMMA___IDENTIFIER___array_specifier___EQUAL___initializer(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::init_declarator_list__To__init_declarator_list___COMMA___IDENTIFIER___EQUAL___initializer(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_declaration__To__fully_specified_type(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_declaration__To__fully_specified_type___IDENTIFIER(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_declaration__To__fully_specified_type___IDENTIFIER___array_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_declaration__To__fully_specified_type___IDENTIFIER___array_specifier___EQUAL___initializer(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_declaration__To__fully_specified_type___IDENTIFIER___EQUAL___initializer(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::fully_specified_type__To__type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::fully_specified_type__To__type_qualifier___type_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_qualifier__To__single_type_qualifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_qualifier__To__type_qualifier___single_type_qualifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_type_qualifier__To__storage_qualifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::single_type_qualifier__To__precision_qualifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::storage_qualifier__To__CONST(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::storage_qualifier__To__IN(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::storage_qualifier__To__OUT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::storage_qualifier__To__INOUT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::storage_qualifier__To__UNIFORM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier__To__type_specifier_nonarray(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier__To__type_specifier_nonarray___array_specifier(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::array_specifier__To__LM___RM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::array_specifier__To__LM___constant_expression___RM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::array_specifier__To__array_specifier___LM___RM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::array_specifier__To__array_specifier___LM___constant_expression___RM(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__STRUCT__IDENTIFIER(TRLSLGenerator::InType *_, TRL::TRLSLGenerator::InType _1, TRL::TRLSLGenerator::InType _2, TRL::TRLSLGenerator::InType _3, TRL::TRLSLGenerator::InType _4, TRL::TRLSLGenerator::InType _5, TRL::TRLSLGenerator::InType _6, TRL::TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__VOID(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__FLOAT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__INT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__UINT(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__BOOL(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__VEC2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__VEC3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__VEC4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__BVEC2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__BVEC3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__BVEC4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__IVEC2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__IVEC3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__IVEC4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__UVEC2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__UVEC3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__UVEC4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT2X2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT2X3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT2X4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT3X2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT3X3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT3X4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT4X2(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT4X3(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__MAT4X4(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__SAMPLER2D(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__SAMPLER3D(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::type_specifier_nonarray__To__SAMPLERCUBE(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::precision_qualifier__To__HIGH_PRECISION(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::precision_qualifier__To__MEDIUM_PRECISION(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::precision_qualifier__To__LOW_PRECISION(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::initializer__To__assignment_expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::declaration_statement__To__declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::statement__To__compound_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::statement__To__simple_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::simple_statement__To__declaration_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::simple_statement__To__expression_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::simple_statement__To__selection_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::simple_statement__To__iteration_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::simple_statement__To__jump_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::compound_statement__To__LB___RB(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::compound_statement__To__LB___statement_list___RB(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::statement_list__To__statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::statement_list__To__statement_list___statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::expression_statement__To__SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::expression_statement__To__expression___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::selection_statement__To__IF___LS___expression___RS___selection_rest_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::selection_rest_statement__To__statement___ELSE___statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::selection_rest_statement__To__statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::condition__To__expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::condition__To__fully_specified_type___IDENTIFIER___EQUAL___initializer(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::iteration_statement__To__WHILE___LS___condition___RS___statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::iteration_statement__To__FOR___LS___for_init_statement___for_rest_statement___RS___statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::for_init_statement__To__expression_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::for_init_statement__To__declaration_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::condition_opt__To__condition(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::condition_opt__To__Empty(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::for_rest_statement__To__condition_opt___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::for_rest_statement__To__condition_opt___SEMICOLON___expression(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::jump_statement__To__CONTINUE___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::jump_statement__To__BREAK___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::jump_statement__To__RETURN___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::jump_statement__To__RETURN___expression___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::jump_statement__To__DISCARD___SEMICOLON(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::translation_unit__To__external_declaration_list(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::external_declaration_list__To__external_declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::external_declaration_list__To__external_declaration_list___external_declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::external_declaration__To__function_definition(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::external_declaration__To__declaration(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRLSLGenerator::RetType DebugGenerator::function_definition__To__function_prototype___compound_statement(TRLSLGenerator::InType* _, TRLSLGenerator::InType _1, TRLSLGenerator::InType _2, TRLSLGenerator::InType _3, TRLSLGenerator::InType _4, TRLSLGenerator::InType _5, TRLSLGenerator::InType _6, TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRL::TRLSLGenerator::RetType DebugGenerator::external_declaration__To__struct_definition(TRL::TRLSLGenerator::InType *_, TRL::TRLSLGenerator::InType _1, TRL::TRLSLGenerator::InType _2, TRL::TRLSLGenerator::InType _3, TRL::TRLSLGenerator::InType _4, TRL::TRLSLGenerator::InType _5, TRL::TRLSLGenerator::InType _6, TRL::TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRL::TRLSLGenerator::RetType DebugGenerator::declaration_list__To__declaration(TRL::TRLSLGenerator::InType *_, TRL::TRLSLGenerator::InType _1, TRL::TRLSLGenerator::InType _2, TRL::TRLSLGenerator::InType _3, TRL::TRLSLGenerator::InType _4, TRL::TRLSLGenerator::InType _5, TRL::TRLSLGenerator::InType _6, TRL::TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRL::TRLSLGenerator::RetType DebugGenerator::declaration_list__To__declaration_list__declaration(TRL::TRLSLGenerator::InType *_, TRL::TRLSLGenerator::InType _1, TRL::TRLSLGenerator::InType _2, TRL::TRLSLGenerator::InType _3, TRL::TRLSLGenerator::InType _4, TRL::TRLSLGenerator::InType _5, TRL::TRLSLGenerator::InType _6, TRL::TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}

TRL::TRLSLGenerator::RetType DebugGenerator::struct_definition__To__STRUCT__IDENTIFIER__LB__declaration_list__RB__SEMICOLON(TRL::TRLSLGenerator::InType *_, TRL::TRLSLGenerator::InType _1, TRL::TRLSLGenerator::InType _2, TRL::TRLSLGenerator::InType _3, TRL::TRLSLGenerator::InType _4, TRL::TRLSLGenerator::InType _5, TRL::TRLSLGenerator::InType _6, TRL::TRLSLGenerator::InType _7)
{
    Log(__FUNCTION__); return TRLSLGenerator::RetType();
}


} // end of namespace TRL