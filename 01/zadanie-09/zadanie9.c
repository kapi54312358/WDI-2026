#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0, b=0;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &a, &b);
    if(b==0)
    {
        printf("Nie dziel przez 0");
    }
    if(a%b==0)
    {
        printf("%d dzieli sie przez %d", a, b);
    }
    else
    {
        printf("%d nie dzieli sie przez %d", a, b);
    }

    return 0;
}