#include "header.h"
#include <stdio.h>

int card_suit(char letter) {
    char suit = letter;
    switch (suit)
    {
    case 'C':
        puts("Clubs");
        break;
    case 'D':
        puts("Diamonds");
        break;
    case 'H':
        puts("Hearts");
        break;
    default:
        break;
    }
}