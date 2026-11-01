#include <stdio.h>
#include <stdlib.h>


int max (int a, int b)
{
    int maxsimum = 0;
    return maxsimum = (a>b) ? a:b;
}

int min (int a, int b)
{
    int minimum = 0;
    return minimum = (a<b) ? a:b;
}

int main(void)
{
    int a=0, b=0;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &a, &b);
    printf ("wieksza: %d\n mniejsza: %d", max(a,b), min(a,b));

    return 0;
}