#include <stdio.h>
#include <stdint.h>
#include <malloc.h>
#include "hello.h"

const uint32_t HELLO_SIZE = 20;

int32_t main(int32_t argc, char** argv){
    char* hello = (char*)malloc(sizeof(char)*HELLO_SIZE);
    memset(hello,0,HELLO_SIZE);
    get_hello(hello,HELLO_SIZE);
    printf("%s",hello);
    return 0;
}