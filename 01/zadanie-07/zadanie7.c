#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0, b=0;
    printf("Podaj dwie liczby calkowite\n");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("wieksza: %d\n", a);
        printf("mniejsza: %d\n", b);
        printf("%d > %d", a, b);
    }
    
    else if (b>a)
    {
        printf("wieksza: %d\n", b);
        printf("mniejsza: %d\n", a);
        printf("%d < %d", a, b);
    }

    else
    {
        printf("wieksza: %d\n", b);
        printf("mniejsza: %d\n", a);
        printf("%d = %d", a, b);
    }

    return 0;
}