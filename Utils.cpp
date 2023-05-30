#include <string.h>
#include <stdio.h>

#include "Utils.h"

void copy_string(char** destination, const char* src) {
    int destination_length = strlen(src);
    *destination = new char[destination_length];
    strncpy(*destination, src, destination_length);
}