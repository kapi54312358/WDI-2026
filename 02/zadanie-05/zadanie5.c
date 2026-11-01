#include <stdio.h>
#include <stdlib.h>

void poddany ()
{
    printf("czczic Krola");
}

void giermek ()
{
    poddany();

    printf(", wchodzic na dziedziniec zamkowy codziennie");
}

void rycerz ()
{
    giermek();
    printf(", wchodzić do zamku codziennie oraz rekrutować giermków");
}

void mag ()
{
    rycerz();
    printf(", rozmawiać z Królem");
}

void krolowa ()
{
    mag();
    printf(", rozkazywac Krolowi");
}

int main(void)
{
    char klasa=0;
    printf("Wybierz klase spoleczna:\n");
    scanf("%c", &klasa);
    
    switch (klasa)
    {
    case 'P':
        printf("Poddany może: ");
        poddany();
        break;
    case 'G':
        printf("Giermek może: ");
        giermek();
        break;
    case 'R':
        printf("Rycerz może: ");
        rycerz();
        break;
    case 'M':
        printf("Mag może: ");
        mag();
        break;
    case 'K':
        printf("Krolowa może: ");
        krolowa();
        break;
    
    default:
        break;
    }

    return 0;
}