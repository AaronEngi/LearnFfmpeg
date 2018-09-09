//
// Created by Administrator on 2018/9/9 0009.
//
#include <jni.h>
#include "ffmpeg.h"
#include <android/log.h>

JNIEXPORT jint JNICALL wang_tyrael_learnffmpeg_FFmpegUtil_getRotation(JNIEnv *env, jobject thiz, jstring videoPath){
    __android_log_print(ANDROID_LOG_INFO, "jason", "%s", "getRotation");
    const char * filePath = env->GetStringUTFChars(videoPath, false);

    av_register_all();
}


