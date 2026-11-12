#include <stdio.h>
#include <stdlib.h>

void bubble_sort(float *A, int n)
{
    int i=0, j=0;
    float temp=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(void)
{
    int i=0, n=10;
    float Tablica [10];

    printf("Podaj 10 liczb oddzielonych enterem:\n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &Tablica[i]);
    }

    bubble_sort(Tablica, n);

    for(i=0; i<n; i++)
    {
        printf("%f ", Tablica[i]);
    }

    return 0;
}