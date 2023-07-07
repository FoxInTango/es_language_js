#include "js_token.h"
foxintango::Unicode is_mark(const foxintango::Unicode& code){
    if(code == es_token_mark_bracket_l[0] || 
       code == es_token_mark_bracket_r[0]){
        return code;
    }

    return 0;
}