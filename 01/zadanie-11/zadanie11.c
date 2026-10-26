#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0;
    printf("Jedna liczby:\n");
    scanf("%d", &a);
    if(a>0 && a%2==0)
    {
        printf("Liczba %d jest dodatnia i parzysta", a);
    }
    else
    {
        printf("Liczba %d nie jest dodatnia i jednoczesnie parzysta", a);
    }

    return 0;
}