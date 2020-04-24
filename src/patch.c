

#include <wolfssl/wolfssl/ssl.h>

// This is for some reason not included and implemented with the set of parameters I use,
// quick workaround is to define it here to do pretty much nothing at present.
long wolfSSL_get_verify_result(const WOLFSSL *ssl) {
    if (ssl == NULL) {
        return WOLFSSL_FAILURE;
    }

    return WOLFSSL_SUCCESS;
}