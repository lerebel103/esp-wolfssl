# esp-wolfssl

Makes it possible to build [WolfSSL](https://www.wolfssl.com) as an ESP-IDF component (ESP-IDF >=4.1).

It is possible to include this repo in your project so `esp-tls` uses wolfssl rather than mbedtls. To do so, make sure
`TLS_STACK_WOLFSSL=y` is specified in `sdkconfig` (or via `make menuconfig`). \


This can also be used with [esp32-homekit](https://github.com/lerebel103/esp32-homekit).