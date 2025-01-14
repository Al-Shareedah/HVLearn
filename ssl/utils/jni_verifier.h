/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_learner_learners_JNIVerifier */

#ifndef _Included_org_learner_learners_JNIVerifier
#define _Included_org_learner_learners_JNIVerifier
#ifdef __cplusplus
extern "C" {
#endif
#undef org_learner_learners_JNIVerifier_REJECT
#define org_learner_learners_JNIVerifier_REJECT 0L
#undef org_learner_learners_JNIVerifier_ACCEPT
#define org_learner_learners_JNIVerifier_ACCEPT 1L
#undef org_learner_learners_JNIVerifier_ERROR
#define org_learner_learners_JNIVerifier_ERROR 2L
/*
 * Class:     org_learner_learners_JNIVerifier
 * Method:    readcert
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_learner_learners_JNIVerifier_readcert
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_learner_learners_JNIVerifier
 * Method:    freecert
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_learner_learners_JNIVerifier_freecert
  (JNIEnv *, jobject);

/*
 * Class:     org_learner_learners_JNIVerifier
 * Method:    verifyname
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_learner_learners_JNIVerifier_verifyname
  (JNIEnv *, jobject, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
