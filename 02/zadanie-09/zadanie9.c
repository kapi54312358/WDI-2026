#include <stdio.h>
#include <stdlib.h>

unsigned long silnia(int a)
{  
    int i=0;
    unsigned long wynik=1;
    for(i=2; i<=a; i++)
        wynik*=i;
    return wynik;
}

int main(void)
{
    int a=0;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    if(a<0)
        printf("nie istnieje taka silnia");
    else
        printf("silnia z liczby %d to %lu", a, silnia(a));

    return 0;
}