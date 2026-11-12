#include <stdio.h>
#include <float.h>
#include <math.h>

float srednia (float *A, int n)
{
    int i=0;
    float suma=0;

    for (i = 0; i < n; i++)
    {
        suma+=A[i];
    }
    
    return suma/n;
}

void wypisz_liczby_ponad_srednia(float *A, int n)
{
    float s = srednia(A, n);
    int i=0;

    for(i=0; i<n; i++)
    {
        if(A[i]>s)
            printf("%f ", A[i]);
    }

}

void wypisz_min_max(float *A, int n)
{
    float min = FLT_MAX, max = -FLT_MAX;
    int i=0;

    for(i=0; i<n; i++)
    {
        if(A[i] < min)
            min = A[i];
        if(A[i] > max)
            max = A[i];
    }

    printf("%f %f", min, max);
}

int suma_np(float *A, int n)
{
    int i=0, suma=0;

    for(i=0; i<n; i++)
        if (fabs(fmod(A[i], 2)) == 1)
            suma += A[i];
    
    return suma;
}

void wypisz_od_tylu(float *A, int n)
{
    int i=n;
    for(i=n-1; i>=0; i--)
    {
        printf("%f ", A[i]);
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
    
    printf("\nsrednia z liczb to: %f", srednia(Tablica, n));

    printf("\nliczby wieksze od sredniej to: ");
    wypisz_liczby_ponad_srednia(Tablica, n);

    printf("\nnajmniejsza i najwieksza liczba to: ");
    wypisz_min_max(Tablica, n);

    printf("\nsuma nieparzystych to: %d", suma_np(Tablica, n));

    printf("\npodane liczby w odwrotnej kolejnosci to: ");
    wypisz_od_tylu(Tablica, n);
    
    return 0;
}