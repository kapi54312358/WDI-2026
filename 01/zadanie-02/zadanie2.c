#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float liczba=0;
    printf("Podaj liczbe zmienno przecinkowa z conajmniej piecioma cyframi po przecinku:\n");
    scanf("%f", &liczba);
    printf("1 miejsce po przecinku: %.1f\n", liczba);
    printf("3 miejsca po przecinku: %.3f\n", liczba);
    printf("5 miejsc po przecinku: %.5f\n", liczba);

    return 0;
}