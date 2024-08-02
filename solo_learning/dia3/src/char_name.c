#include "header.h"
#include <stdio.h>

int char_name (void) {
    char ex[20]; /*Array de 20 caracteres*/
    puts("Enter boyfriend's or girlfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're history.\n\n", ex);
    return 0;
}
