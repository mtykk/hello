#ifndef HELLO_H
#define HELLO_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Gets the hello message
 * @param target String to store the message
 * @param size   Size of target
 * @return 0 if succeeded
 */
uint8_t get_hello(char* target,size_t size);

#ifdef __cplusplus
}
#endif

#endif