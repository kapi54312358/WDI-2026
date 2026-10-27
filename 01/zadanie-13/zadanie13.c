#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long i=0, a=0, n=0, suma=0;
    double srednia=0;
    printf("Podaj ile liczb chcesz wczytac:\n");
    scanf("%ld", &n);
    printf("podaj %ld liczb:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%ld", &a);
        suma+=a;
    }
    srednia = (double)suma/n;
    printf("srednia podanych liczb to: %f\n", srednia);

    return 0;
}