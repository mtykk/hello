#include "hello.h"

uint8_t get_hello(char* target,size_t size){
    strncpy(target,"Hello, RoboMaster\n",size);
    return 0;
}