//
// Created by Dinmuxammed Mamanov on 14/06/23.
//

#ifndef NDK_FUNCTION_H
#define NDK_FUNCTION_H
#endif //NDK_FUNCTION_H

#include <jni.h>
#include <string>

using namespace std;

string toString(JNIEnv *env, jstring text) {
    jboolean isCopy;
    return env->GetStringUTFChars(text, &isCopy);
}

jstring fromString(JNIEnv *env, string text) {
    return env->NewStringUTF(text.c_str());
}

#define nativeScope extern "C"
#define fun(CLASS,METHOD, RETURN_TYPE, ...) JNIEXPORT RETURN_TYPE JNICALL Java_uz_gita_dima_ndk_##CLASS##_##METHOD(JNIEnv *env, jobject obj, ## __VA_ARGS__)