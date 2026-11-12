#include <stdio.h>
#include <stdlib.h>

#define n 5

void wypisz1 (int *Tablica)
{
    int i = 0;
    for(i = 0; i < n; i++)
        printf("%d ", Tablica[i]);
    
    i=0;
    printf("\n");

    while (i < n)
    {
        printf("%d ", Tablica[i]);
        i++;
    }
    
    i=0;
    printf("\n");
    
    do
    {
        printf("%d ", Tablica[i]);
        i++;
    } while (i < n);    
}

void wypisz2 (int *Tablica)
{
    int i = 0;
    for(i = n; i > 0; i--)
        printf("%d ", Tablica[i-1]);
    
    i = n;
    printf("\n");

    while (i > 0)
    {
        printf("%d ", Tablica[i-1]);
        i--;
    }
    
    i = n;
    printf("\n");
    
    do
    {
        printf("%d ", Tablica[i-1]);
        i--;
    } while (i > 0);
}

int main(void)
{
    int Tablica [n] = {4, 235, 3, 346, 8};

    wypisz1(Tablica);
    printf("\n");
    wypisz2(Tablica);

    return 0;
}