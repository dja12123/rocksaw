/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_savarese_rocksaw_net_RawSocket */

#ifndef _Included_com_savarese_rocksaw_net_RawSocket
#define _Included_com_savarese_rocksaw_net_RawSocket
#ifdef __cplusplus
extern "C" {
#endif
#undef com_savarese_rocksaw_net_RawSocket___UNDEFINED
#define com_savarese_rocksaw_net_RawSocket___UNDEFINED -1L
/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __PF_INET
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1PF_1INET
  (JNIEnv *, jclass);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __PF_INET6
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1PF_1INET6
  (JNIEnv *, jclass);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __RockSawStartup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1RockSawStartup
  (JNIEnv *, jclass);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __RockSawShutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1RockSawShutdown
  (JNIEnv *, jclass);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getErrorMessage
 * Signature: (Ljava/lang/StringBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getErrorMessage
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __socket
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1socket
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __pmodeSocket
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1pmodeSocket
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    getProtocolByName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket_getProtocolByName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __query_routing_interface
 * Signature: (II[B[B)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1query_1routing_1interface
  (JNIEnv *, jclass, jint, jint, jbyteArray, jbyteArray);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __bind
 * Signature: (II[BI)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1bind
  (JNIEnv *, jclass, jint, jint, jbyteArray, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __bindDevice
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1bindDevice
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1close
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __isErrorEAGAIN
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1isErrorEAGAIN
  (JNIEnv *, jobject);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __setIPHeaderInclude
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1setIPHeaderInclude
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getIPHeaderInclude
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getIPHeaderInclude
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __setSendBufferSize
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1setSendBufferSize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getSendBufferSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getSendBufferSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __setReceiveBufferSize
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1setReceiveBufferSize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getReceiveBufferSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getReceiveBufferSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __select
 * Signature: (IZI)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1select
  (JNIEnv *, jclass, jint, jboolean, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __setSendTimeout
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1setSendTimeout
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getSendTimeout
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getSendTimeout
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __setReceiveTimeout
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1setReceiveTimeout
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __getReceiveTimeout
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1getReceiveTimeout
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __recvfrom1
 * Signature: (I[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1recvfrom1
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __recvfrom2
 * Signature: (I[BIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1recvfrom2
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jint, jbyteArray);

/*
 * Class:     com_savarese_rocksaw_net_RawSocket
 * Method:    __sendto
 * Signature: (I[BIII[BI)I
 */
JNIEXPORT jint JNICALL Java_com_savarese_rocksaw_net_RawSocket__1_1sendto
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jint, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
