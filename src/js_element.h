/*
 * libes
 *
 * Copyright (C) 2022 FoxInTango <foxintango@yeah.net>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */
#ifndef _js_element_h_
#define _js_element_h_
#include <libes/libes.h>
#include <libast/libast.h>
#include <libcpp/libcpp.h>
/**
 * 
 */
EXTERN_C_BEGIN
namespaceBegin(foxintango)

AST_CLASS(JS_OPERATOR);

class foxintangoAPI js_element :public ASTElement{
public:
    js_element();
    ~js_element();
public:
    virtual Error execute(const ASTContext* context, const ASTElement* caller);
};
/** TODO : 赋值与引用
 */
class foxintangoAPI js_undefined :public js_element{};
class foxintangoAPI js_null :public js_element{}; 
namespaceEnd
EXTERN_C_END
#endif
