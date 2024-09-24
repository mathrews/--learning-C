#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int word_per_ln() {
    char *str;
    char buffer[200];

    int c, i, nw, state, j;
    i = 0;
    j = 1;
    nw = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            buffer[i] = c;
        }
        i++;
        j++;
    }
    buffer[j] = '\0';
    // Copia o conteúdo do buffer de volta para a string original
    strcpy(str, buffer);

    printf("%s\n", str);

    // char word[200];
    // for (int i = 0; i < strlen(buffer); i++) {
    //     if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '\t') {
    //         state = OUT;
    //     } else if (state == OUT) {
    //         state = IN;
    //         word[i] = buffer[i];
    //     }
    // }

    return 0;
}