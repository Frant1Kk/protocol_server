

#ifndef SERVER_MD5_H
#define SERVER_MD5_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


uint32_t* md5(char *initial_msg, size_t initial_len);


#endif //SERVER_MD5_H
