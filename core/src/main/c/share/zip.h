/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nfsdb_misc_Zip */

#ifndef _Included_com_nfsdb_misc_Zip
#define _Included_com_nfsdb_misc_Zip
#ifdef __cplusplus
extern "C" {
#endif
#undef com_nfsdb_misc_Zip_gzipHeaderLen
#define com_nfsdb_misc_Zip_gzipHeaderLen 10L
#undef com_nfsdb_misc_Zip_GZIP_MAGIC
#define com_nfsdb_misc_Zip_GZIP_MAGIC 35615L
/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    crc32
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_crc32
        (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    deflate
 * Signature: (JJIZ)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_deflate
        (JNIEnv *, jclass, jlong, jlong, jint, jboolean);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    deflateEnd
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nfsdb_misc_Zip_deflateEnd
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    deflateInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Zip_deflateInit
        (JNIEnv *, jclass);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    deflateReset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_deflateReset
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    inflate
 * Signature: (JJIZ)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_inflate
        (JNIEnv *, jclass, jlong, jlong, jint, jboolean);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    inflateEnd
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nfsdb_misc_Zip_inflateEnd
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    inflateInit
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Zip_inflateInit
        (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    inflateReset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_inflateReset
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    availIn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_availIn
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    availOut
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_availOut
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    totalOut
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Zip_totalOut
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Zip
 * Method:    setInput
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_com_nfsdb_misc_Zip_setInput
        (JNIEnv *, jclass, jlong, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
