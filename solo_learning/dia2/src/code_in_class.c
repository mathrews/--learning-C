#include <stdio.h>
#include "header.h"

int code_in_class(int c)
{
    while (c > 0) {
        puts("I must not write code in class");
        c = c - 1;
    }
}