#include "js_operators.h"
#include <libast/libast.h>
#include <libmodule/libmodule.h>
#include <libcpp/libcpp.h>
using namespace foxintango;
class foxintangoAPI es_language_js_module_Interface :public ModuleInterface {
public:
    es_language_js_module_Interface();
    virtual ~es_language_js_module_Interface();
public:
    virtual bool  containClass(const char* name);
    virtual void* createObject(const char* name, const Model& model = Model());

    virtual bool  containFunction(const char* name);
    virtual void* exportFunction(const char* name);

    virtual bool containVariable(const char* name);
    virtual void* exportVariable(const char* name);
};