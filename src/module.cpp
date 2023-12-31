#include "module.h"
#include "js_document.h"

Array<ASTElementInterface*> AST_MODULE_SYMBOLS;

es_language_js_module_Interface::es_language_js_module_Interface(){}
es_language_js_module_Interface::~es_language_js_module_Interface(){}

bool es_language_js_module_Interface::containClass(const char* name){
    if(String("js_document") == name) return true;
}
void* es_language_js_module_Interface::createObject(const char* name, const Model& model){
    if(String("js_document") == name){
        const ModelElement* e = model.subelementAt("context");
        void* context = 0;
        if (e) e->as(&context);
        return new js_document(static_cast<ASTContext*>(context));
    }

    return 0;
}
bool es_language_js_module_Interface::containVariable(const char* name) {
    return false;
}

void* es_language_js_module_Interface::exportVariable(const char* name) {
    AST_EXPORT(ast_map);
    return &AST_MODULE_SYMBOLS;
}

es_language_js_module_Interface foxintangoAPI MODULE_INTERFACE_INSTANCE;