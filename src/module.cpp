#include "module.h"
#include "js_document.h"

Array<ASTElementInterface*> ast_symbols;

es_language_js_module_Interface::es_language_js_module_Interface(){}
es_language_js_module_Interface::~es_language_js_module_Interface(){}

bool es_language_js_module_Interface::containClass(const char* name){
    if(String("js_document") == name) return true;
}
void* es_language_js_module_Interface::createObject(const char* name, const Model& model){
    if(String("js_document") == name) return new js_document();

    return 0;
}
bool es_language_js_module_Interface::containVariable(const char* name) {
    return false;
}

void* es_language_js_module_Interface::exportVariable(const char* name) {
    AST_EXPORT(ast_map);
    return 0;
}

es_language_js_module_Interface foxintangoAPI MODULE_INTERFACE_INSTANCE;