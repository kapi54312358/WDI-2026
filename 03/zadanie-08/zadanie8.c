#include <stdio.h>

#define ROZMIAR 5

int kolejka[ROZMIAR];
int poczatek = 0;
int koniec = 0; 
int ile = 0;

int kolejka_dodaj(int x)
{
    if (ile == ROZMIAR)
        return 0;
    kolejka[koniec] = x;
    koniec = (koniec + 1) % ROZMIAR;
    ile++;
    return 1;
}

int kolejka_usun(int *x)
{
    if (ile == 0)
        return 0;
    *x = kolejka[poczatek];
    poczatek = (poczatek + 1) % ROZMIAR;
    ile--;
    return 1;
}

void kolejka_wypisz(void)
{
    int i;
    printf("Kolejka (pierwszy -> ostatni): ");
    for (i = 0; i < ile; i++)
        printf("%d ", kolejka[(poczatek + i) % ROZMIAR]);
    printf("\n");
}

int stos[ROZMIAR];
int szczyt = 0;

int stos_dodaj(int x)
{
    if (szczyt == ROZMIAR)
        return 0;
    stos[szczyt++] = x;
    return 1;
}

int stos_usun(int *x)
{
    if (szczyt == 0)
        return 0;
    *x = stos[--szczyt];
    return 1;
}

void stos_wypisz(void)
{
    int i;
    printf("Stos (szczyt -> dno): ");
    for (i = szczyt - 1; i >= 0; i--)
        printf("%d ", stos[i]);
    printf("\n");
}

int main(void)
{
    int wybor = -1, x;

    while (wybor != 0)
    {
        printf("\n1 - dodaj do kolejki (FIFO)\n"
               "2 - usun z kolejki\n"
               "3 - poloz na stos (LIFO)\n"
               "4 - zdejmij ze stosu\n"
               "5 - wypisz oba\n"
               "0 - koniec\n> ");
        if (scanf("%d", &wybor) != 1)
            return 1;

        switch (wybor)
        {
        case 1:
            printf("Liczba: ");
            scanf("%d", &x);
            if (!kolejka_dodaj(x))
                printf("Kolejka pelna!\n");
            break;
        case 2:
            if (kolejka_usun(&x))
                printf("Usunieto z kolejki: %d\n", x);
            else
                printf("Kolejka pusta!\n");
            break;
        case 3:
            printf("Liczba: ");
            scanf("%d", &x);
            if (!stos_dodaj(x))
                printf("Stos pelny!\n");
            break;
        case 4:
            if (stos_usun(&x))
                printf("Zdjeto ze stosu: %d\n", x);
            else
                printf("Stos pusty!\n");
            break;
        case 5:
            kolejka_wypisz();
            stos_wypisz();
            break;
        case 0:
            break;
        default:
            printf("Nieznana opcja\n");
        }
    }
    return 0;
}