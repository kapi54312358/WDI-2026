#include <stdio.h>
#include <stdlib.h>

unsigned long ciag (int n)
{
    unsigned long w1=0, w2=0, w3=0;
    if(n==1)
        return 1;
    if (n==2)
        return 2;    
    if (n==3)
        return 3;
    
    w1=ciag(n-1);
    w2=ciag(n-2);
    w3=ciag(n-3);

    return w1 * w2 - w3;
}

int main(void)
{
    int liczba=0;
    printf("Podaj ktora liczbe ciagu chcesz obliczyc:\n");
    scanf("%d", &liczba);
    if(liczba <= 0)
        printf("nie ma takiego wyrazu ciagu");
    else
        printf("ta liczba to: %lu", ciag(liczba));

    return 0;
}