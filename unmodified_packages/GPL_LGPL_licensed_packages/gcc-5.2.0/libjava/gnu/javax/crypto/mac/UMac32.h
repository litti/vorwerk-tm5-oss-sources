
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_UMac32__
#define __gnu_javax_crypto_mac_UMac32__

#pragma interface

#include <gnu/javax/crypto/mac/BaseMac.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
            class UHash32;
            class UMac32;
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
}

class gnu::javax::crypto::mac::UMac32 : public ::gnu::javax::crypto::mac::BaseMac
{

public:
  UMac32();
private:
  UMac32(::gnu::javax::crypto::mac::UMac32 *);
public:
  virtual ::java::lang::Object * clone();
  virtual jint macSize();
  virtual void init(::java::util::Map *);
  virtual void update(jbyte);
  virtual void update(JArray< jbyte > *, jint, jint);
  virtual JArray< jbyte > * digest();
  virtual void reset();
  virtual jboolean selfTest();
private:
  JArray< jbyte > * pdf();
public:
  static ::java::lang::String * NONCE_MATERIAL;
private:
  static ::java::lang::String * TV1;
  static ::java::math::BigInteger * MAX_NONCE_ITERATIONS;
public: // actually package-private
  static const jint OUTPUT_LEN = 8;
  static const jint L1_KEY_LEN = 1024;
  static const jint KEY_LEN = 16;
private:
  static ::java::lang::Boolean * valid;
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::mac::BaseMac)))) nonce;
  ::gnu::javax::crypto::mac::UHash32 * uhash32;
  ::java::math::BigInteger * nonceReuseCount;
  JArray< jbyte > * K;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_mac_UMac32__
