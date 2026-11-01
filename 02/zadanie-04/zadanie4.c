#include <stdio.h>
#include <stdlib.h>

void wypisz_wynik(double a, double b, char dzialanie)
{
    long a_pom, b_pom;

    switch (dzialanie)
    {
        case '+':
            printf("%g + %g = %g\n", a, b, a + b);
            break;

        case '-':
            printf("%g - %g = %g\n", a, b, a - b);
            break;

        case '*':
            printf("%g * %g = %g\n", a, b, a * b);
            break;

        case '/':
            if (b == 0)
                printf("%g / %g -> nie mozna dzielic przez 0!\n", a, b);
            else
                printf("%g / %g = %g\n", a, b, a / b);
            break;

        case '%':
            a_pom = (long)a;
            b_pom = (long)b;
            if (b_pom == 0)
                printf("%ld %% %ld -> nie mozna dzielic przez 0!\n", a_pom, b_pom);
            else
                printf("%ld %% %ld = %ld\n", a_pom, b_pom, a_pom % b_pom);
            break;

        default:
            printf("Nieznane dzialanie\n");
            break;
    }
}

int main(void)
{
    double a = 0, b = 0;
    char dzialanie = '+';
    char nowe;
    int wybor;

    do
    {
        printf("\n==============================\n");
        printf("Wynik: ");
        wypisz_wynik(a, b, dzialanie);
        printf("==============================\n");
        printf("1 - zmien pierwsza liczbe (teraz: %g)\n", a);
        printf("2 - zmien druga liczbe (teraz: %g)\n", b);
        printf("3 - wybierz dzialanie (teraz: %c)\n", dzialanie);
        printf("0 - zakoncz program\n");
        printf("Twoj wybor: ");
        scanf("%d", &wybor);

        switch (wybor)
        {
            case 1:
                printf("Podaj pierwsza liczbe: ");
                scanf("%lf", &a);
                break;

            case 2:
                printf("Podaj druga liczbe: ");
                scanf("%lf", &b);
                break;

            case 3:
                printf("Podaj dzialanie (+, -, *, /, %%): ");
                scanf(" %c", &nowe);
                dzialanie = nowe;
                break;

            case 0:
                printf("Koniec programu.\n");
                break;

            default:
                printf("Nie ma takiej opcji!\n");
                break;
        }
    } while (wybor != 0);

    return 0;
}