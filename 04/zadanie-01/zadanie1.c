#include <stdio.h>

#define N 10

void zamien(int tab[], int a, int b)
{
    int tmp;

    tmp = tab[a];
    tab[a] = tab[b];
    tab[b] = tmp;
}

int podziel(int tab[], int l, int r)
{
    int srodek, pivot, poz, i;

    srodek = (l + r) / 2;
    pivot = tab[srodek];
    zamien(tab, srodek, r);

    poz = l;
    for (i = l; i < r; i++) {
        if (tab[i] < pivot) {
            zamien(tab, i, poz);
            poz++;
        }
    }
    zamien(tab, poz, r);

    return poz;
}

void quick_sort(int tab[], int l, int r)
{
    int p;

    if (l < r) {
        p = podziel(tab, l, r);
        quick_sort(tab, l, p - 1);
        quick_sort(tab, p + 1, r);
    }
}

int main()
{
    int tab[N];
    int i;

    printf("Podaj %d liczb calkowitych:\n", N);
    for (i = 0; i < N; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    printf("\nPrzed sortowaniem: ");
    for (i = 0; i < N; i++)
        printf("%d ", tab[i]);

    quick_sort(tab, 0, N - 1);

    printf("\nPo sortowaniu: ");
    for (i = 0; i < N; i++)
        printf("%d ", tab[i]);

    return 0;
}