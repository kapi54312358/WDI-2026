#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int i=0, a=0, suma=0;
    printf("Podaj jedna liczbe:\n");
    scanf("%ld", &a);
    for(i=0; i<a; i++)
    {
        suma+=i;
    }

    printf("Suma wszystkich liczb naturalnych do %ld to %ld", a, suma);

    return 0;
}