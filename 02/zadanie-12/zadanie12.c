#include <stdio.h>
#include <stdlib.h>

void dodawanie ()
{
    int i=0, n=0, temp=0, wynik=0;
    printf("Podaj ile liczb chcesz dodawac:\n");
    scanf("%d", &n);
    printf("podaj %d liczb\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &temp);
        wynik+=temp;
    }
    printf("wynik to: %d", wynik);
}

void odejmowanie ()
{
    int a=0, wynik=0;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    printf("odejmuj kolejne liczby:\n");
    wynik=a;
    do
    {
        scanf("%d", &a);
        wynik-=a;
    } while (a!=0);
    

    printf("wynik to:%d", wynik);
}

void mnozenie()
{
    int a=0, b=0;
    printf("Podaj dwie liczby do przemnozenia:\n");
    scanf("%d %d", &a, &b);
    printf("wynik to %d", a*b);
}

void dzielenie()
{
    int a=0, b=0;
    printf("Podaj dwie liczby do podzielenia:\n");
    scanf("%d %d", &a, &b);
    if(b==0)
        printf("nie mozna dzielic przez 0");
    else   
        printf("wynik to %f", (double)a/b);
}

void potegowanie()
{
    double wynik=1;
    int i=0, liczba=0, wykladnik=0;
    printf("Podaj liczbe potegowana i wykladnik\n");
    scanf("%d %d", &liczba, &wykladnik);
    if(liczba==0 && wykladnik<0)
    {
        printf("Nie mozna podniesc 0 do potegi ujemnej\n");
    }
    else
    {
        if(wykladnik>0)
        {
            for(i=0; i<wykladnik; i++)
                wynik*=liczba;
        }
        else if (wykladnik==0)
        {
            wynik=1;
        }
        else
        {
            wykladnik*=-1;
            for(i=0; i<wykladnik; i++)
                wynik*=liczba;
            wynik=(double)(1/wynik);
        }
        printf("wynik to: %f", wynik);
    }

    
}

void kwadrat()
{
    int a=0;
    printf("Podaj liczbe ktora chcesz podniesc do kwadratu:\n");
    scanf("%d", &a);
    printf("wynik to %ld", (long)a*a);
}

void silnia()
{
    int i=0, a=0;
    long wynik=1;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    if(a<0)
        printf("nie istnieje taka silnia");
    else
    {
        for(i=2; i<=a; i++)
            wynik*=i;
        printf("wynik to %ld", wynik);
    }     
}

void blad()
{
    printf("Nie ma takiej opcji!\n");
}

int main(void)
{
    int wybor;
    
    printf("\n==============================\n");
    printf("1 -  dodawanie n liczb\n");
    printf("2 - odejmowanie od liczby az do momentu podania '0'\n");
    printf("3 - mnozenie dwoch liczb\n");
    printf("4 - dzielenie liczby\n");
    printf("5 - potegowanie\n");
    printf("6 - kwadrat liczby\n");
    printf("7 - silnia\n");

    printf("Twoj wybor: ");
    scanf("%d", &wybor);

    switch (wybor)
    {
        case 1:
            dodawanie();            
            break;

        case 2:
            odejmowanie();
            break;

        case 3:
            mnozenie();
            break;
        case 4:
            dzielenie();
            break;
        case 5:
            potegowanie();
            break;
        case 6:
            kwadrat();
            break;
        case 7:
            silnia();
            break;

        default:
            blad();
            break;
    }

    return 0;
}