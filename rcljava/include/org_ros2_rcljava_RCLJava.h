// Copyright 2016 Esteve Fernandez <esteve@apache.org>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ros2_rcljava_RCLJava */

#ifndef ORG_ROS2_RCLJAVA_RCLJAVA_H_
#define ORG_ROS2_RCLJAVA_RCLJAVA_H_
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeRCLJavaInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeRCLJavaInit
  (JNIEnv *, jclass);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeCreateNodeHandle
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_ros2_rcljava_RCLJava_nativeCreateNodeHandle
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeGetRMWIdentifier
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_ros2_rcljava_RCLJava_nativeGetRMWIdentifier
  (JNIEnv *, jclass);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeOk
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_ros2_rcljava_RCLJava_nativeOk
  (JNIEnv *, jclass);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeGetZeroInitializedWaitSet
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_ros2_rcljava_RCLJava_nativeGetZeroInitializedWaitSet
  (JNIEnv *, jclass);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeWaitSetInit
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeWaitSetInit
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeWaitSetClearSubscriptions
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeWaitSetClearSubscriptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeWaitSetAddSubscription
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeWaitSetAddSubscription
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeWait
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeWait
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeTake
 * Signature: (JLjava/lang/Class;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_ros2_rcljava_RCLJava_nativeTake
  (JNIEnv *, jclass, jlong, jclass);

/*
 * Class:     org_ros2_rcljava_RCLJava
 * Method:    nativeShutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_ros2_rcljava_RCLJava_nativeShutdown
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif  // ORG_ROS2_RCLJAVA_RCLJAVA_H_