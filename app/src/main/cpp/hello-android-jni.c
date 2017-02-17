//
// Created by Ahsan-TPL on 2/9/2017.
//
#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_tpl_myndktest_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

   return (*env)->NewStringUTF(env, "Hello  from Jni...");
}