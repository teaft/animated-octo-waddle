#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int intelligence, stamina, charisma;
    int max;

    srand(time(0));

    intelligence = rand() % 18 + 1;          
    stamina = rand() % (19 - intelligence) + 1;
    charisma = 20 - intelligence - stamina;

    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);

    max = intelligence;
    if (stamina > max) max = stamina;
    if (charisma > max) max = charisma;

    if (max == intelligence)
    {
        printf("Class: mage\n");
    }
    else if (max == stamina)
    {
        printf("Class: knight\n");
    }
    else
    {
        printf("Class: thief\n");
    }

    return 0;
}
