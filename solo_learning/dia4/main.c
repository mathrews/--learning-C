/*
    O tipo que vem antes das funções determina o tipo de retorno desta função. Quando a função main
    declara que o tipo de retorno é INT, isso significa que o retorno dela irá ser um 0 ou 1. Se for 0, significa sucesso. Se retornar qualquer outro valor significa que deu erro.

    Na função main, sempre deverá ter um valor de retorno int.
*/

#include <stdio.h>
#include <stdlib.h>
#include "src/header.h"

int main(void)
{
    printf("H\n");
    decks();
    printf("%s says the count is %i \n", "Ben", 21);
    desafio_estrutura();
}