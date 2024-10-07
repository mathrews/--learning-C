#include "./header.h"
#include <stdio.h>

void histogram_length() {
    int i, c;
    char *buffer;
    int lengths[100];

    i = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            continue;
        } else {
            buffer[i] = c;
            i++;
        }
    }

}