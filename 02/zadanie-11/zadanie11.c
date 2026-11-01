#include <stdio.h>
#include <stdlib.h>

double potega(int liczba, int wykladnik)
{
    if (wykladnik == 0)
        return 1;
    if (wykladnik < 0)
        return 1 / potega(liczba, -wykladnik);
    return liczba * potega(liczba, wykladnik - 1);
}
int main(void)
{
    int a=0, b=0;
    printf("Podaj liczbe i jej wykladnik:\n");
    scanf("%d %d", &a, &b);
    if (a == 0 && b < 0)
        printf("Nie mozna podniesc 0 do potegi ujemnej\n");
    else
        printf("liczba %d podniesiona do potegi %d to %g\n", a, b, potega(a, b));

    return 0;
}