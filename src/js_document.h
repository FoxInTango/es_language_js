/*
 * es_language_js
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
#ifndef _js_document_h_
#define _js_document_h_
#include "js_element.h"
#include <libast/libast.h>
#include <libcpp/libcpp.h>
#include <map>
#include <vector>
EXTERN_C_BEGIN
namespaceBegin(foxintango)

typedef enum _JS_ERROR{}JS_DOCUMENT_ERROR;
class foxintangoAPI js_document :ASTDocument{
public:
    js_document(ASTContext* context);
    js_document(ASTContext* context, const URL& url);
    ~js_document();
public:
    Error load(const URL& url);
    Error load_token(String& token,String& content,Index& index);
    ASTElement* load_element(String& token, String& content, Index& index,ASTElement* super,const ASTElementType& type);
    JS_DOCUMENT_ERROR loadFunction(ESContext* es,std::vector<es_token> tokens,Index index);
    JS_DOCUMENT_ERROR loadClass();
    JS_DOCUMENT_ERROR loadOperator();
    JS_DOCUMENT_ERROR loadIfScope();
    JS_DOCUMENT_ERROR loadElse();
    JS_DOCUMENT_ERROR loadSwitchScope();
};
namespaceEnd
EXTERN_C_END
#endif
