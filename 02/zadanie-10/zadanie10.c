#include <stdio.h>
#include <stdlib.h>

double potega(int liczba, int wykladnik)
{
    double wynik=1;
    int i=0;

    if(wykladnik>0)
    {
        for(i=0; i<wykladnik; i++)
            wynik*=liczba;
    }
    else if (wykladnik==0)
    {
        return 1;
    }
    else
    {
        wykladnik*=-1;
        for(i=0; i<wykladnik; i++)
            wynik*=liczba;
        wynik=(double)(1/wynik);
    }

    return wynik;
}

int main(void)
{
    int a=0, b=0;
    printf("Podaj liczbe i jej wykladnik:\n");
    scanf("%d %d", &a, &b);
    if(a==0 && b<0)
    {
        printf("Nie mozna podniesc 0 do potegi ujemnej\n");
        return 0;
    }
    printf("liczba %d podniesiona do potegi %d to %f", a, b, potega(a, b));

    return 0;
}