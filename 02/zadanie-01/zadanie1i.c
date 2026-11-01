#include <stdio.h>
#include <limits.h>

int main(void)
{
    long min=LONG_MAX, max=LONG_MIN, suma=0, liczba_wartosci=0, podana_wartosc=0; 
    double srednia=0;
    printf("Wpisuj liczby zakoncz wpisywanie wpisaniem liczby parzystej:\n");
    do
    {
        scanf("%ld", &podana_wartosc);
        suma+=podana_wartosc;
        liczba_wartosci++;
        if(podana_wartosc < min)
            min=podana_wartosc;
        if(podana_wartosc > max)
            max=podana_wartosc;
    } while (podana_wartosc%2!=0);
    
    srednia=(double)suma/liczba_wartosci;

    printf("najwieksza:%ld\n najmniejsza:%ld\n suma:%ld\n srednia:%f\n", max, min, suma, srednia);

    return 0;
}