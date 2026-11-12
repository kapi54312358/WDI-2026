#include <stdio.h>
#include <stdlib.h>

void scal(float tab[], int lewy, int srodek, int prawy)
{
    int i = lewy, j = srodek + 1, k = 0;
    float *tmp = (float *)malloc((prawy - lewy + 1) * sizeof(float));
 
    while (i <= srodek && j <= prawy) {
        if (tab[i] <= tab[j])
            tmp[k++] = tab[i++];
        else
            tmp[k++] = tab[j++];
    }
    while (i <= srodek)
        tmp[k++] = tab[i++];
    while (j <= prawy)
        tmp[k++] = tab[j++];
 
    for (k = 0; k < prawy - lewy + 1; k++)
        tab[lewy + k] = tmp[k];
 
    free(tmp);
}

void merge_sort(float tab[], int lewy, int prawy)
{
    int srodek;
 
    if (lewy >= prawy)
        return;
 
    srodek = (lewy + prawy) / 2;
    merge_sort(tab, lewy, srodek);
    merge_sort(tab, srodek + 1, prawy);
    scal(tab, lewy, srodek, prawy);
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

    merge_sort(Tablica, 0, n-1);

    for(i=0; i<n; i++)
    {
        printf("%f ", Tablica[i]);
    }

    return 0;
}