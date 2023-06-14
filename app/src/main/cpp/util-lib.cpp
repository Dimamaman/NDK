//
// Created by Dinmuxammed Mamanov on 14/06/23.
//


#include "function.h"
nativeScope {
    fun(Util, add, jint, jint a, jint b) {
        return a + b;
    }

    fun(Util, getInfo, jstring, jstring text) {

        string s = toString(env,text);
        string result = s + " Dima";

        return fromString(env, result);
    }
}
