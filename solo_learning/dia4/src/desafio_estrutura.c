#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*
    Comentários padronizados na forma atual são suportados pelos 3 padrões de compiladores: C88, C11 e ANSI.
*/

int desafio_estrutura(void)
{
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K') /*card_name[0] significa "primeiro caractere do array de caracteres"*/
    {
        val = 10;
    }
    else if (card_name[0] == 'Q')
    {
        val = 10;
    }
    else if (card_name[0] == 'J')
    {
        val = 10;
    }
    else if (card_name[0] == 'A')
    {
        val = 11;
    }
    else
    {
        val = atoi(card_name);
    }
    printf("The card value is: %i\n", val);
    return 0;
}