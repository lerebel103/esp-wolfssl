cmake_minimum_required(VERSION 3.5)

set(CMAKE_CURRENT_SOURCE_DIR ".")
set(WOLFSSL_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/wolfssl)
set(INCLUDE_PATH ${WOLFSSL_ROOT})

set(COMPONENT_SRCDIRS
        "src"
        "${WOLFSSL_ROOT}/src"
        "${WOLFSSL_ROOT}/wolfcrypt/src/"
        "${WOLFSSL_ROOT}/wolfcrypt/src/port/Espressif/"
        "${WOLFSSL_ROOT}/wolfcrypt/src/port/atmel/"
        )

set(COMPONENT_REQUIRES lwip)

set(COMPONENT_ADD_INCLUDEDIRS
        "."
        "${WOLFSSL_ROOT}/IDE/Espressif/ESP-IDF"
        "${IDF_PATH}/components/freertos/include/freertos"
        "${WOLFSSL_ROOT}"
        )

if(IS_DIRECTORY ${IDF_PATH}/components/cryptoauthlib)
    list(APPEND COMPONENT_ADD_INCLUDEDIRS "../cryptoauthlib/lib")
endif()

set(COMPONENT_SRCEXCLUDE
        "${WOLFSSL_ROOT}/wolfcrypt/src/aes_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/aes_gcm_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/chacha_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/fe_x25519_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/poly1305_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/sha256_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/sha512_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/sp_x86_64_asm.S"
        "${WOLFSSL_ROOT}/wolfcrypt/src/evp.c"
        "${WOLFSSL_ROOT}/wolfcrypt/src/misc.c"
        "${WOLFSSL_ROOT}/src/bio.c"
        )

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-unused-variable")

register_component()
