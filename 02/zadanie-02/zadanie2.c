#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int zakres=0, i=0;
    long suma=0;
    printf("Podaj liczbe z zakresu 1-100\n");
    scanf("%d", &zakres);

    if( zakres < 1 || zakres > 100)
    {
        printf("podana liczba jest z poza zakresu");
        return 0;
    }   

    for(i=0; i<=zakres; i++)
    {
        suma+=i*i;
    }

    printf("suma tego ciagu to: %ld", suma);

    return 0;
}