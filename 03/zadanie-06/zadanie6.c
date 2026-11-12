#include <stdio.h>
#include <stdlib.h>

float srednia (int *A, int n)
{
    int i=0, suma=0;

    for (i = 0; i < n; i++)
    {
        suma+=A[i];
    }
    
    return (float)suma/n;
}

void wypisz(int *A, int n)
{
    float s = srednia(A, n);
    int i=0;

    for(i=0; i<n; i++)
    {
        if(A[i]>s)
            printf("%d ", A[i]);
    }

}

int main(void)
{
    int i=0;
    int Tablica [5];

    printf("Podaj 5 liczb calkowitych oddzielonych enterem:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &Tablica[i]);
    }
    
    printf("\n liczby wieksze od sredniej to: ");
    wypisz(Tablica, 5);

    return 0;
}