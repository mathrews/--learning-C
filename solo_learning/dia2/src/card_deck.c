#include "header.h"
#include <stdio.h>

int card_deck(int card_count)
{
    if (card_count > 10) {
        puts("The deck is hot. Increase bet.");
    } else {
        puts("The deck is chill.");
    }
}