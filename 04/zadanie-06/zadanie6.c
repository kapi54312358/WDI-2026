#include <stdio.h>
#include <ctype.h>

#define LIMIT_NAPISU 100000

int dl_ciagu(char *a){
    int i=0;

    while(a[i]!='\0'){
        i++;
    }

    return i;
}

void cezar(char *tekst, int klucz){
    int i=0, n=dl_ciagu(tekst), mala=0;
    char c=0;

    for(i=0; i<n; i++){
        c=tekst[i];

        if(c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
            printf("%c", c);

        else{
            if(c >= 'a') mala=1;

            c = toupper(c);
            c += klucz;
            if(c > 'Z')
                c-=26;
            if(c < 'A')
                c+=26;

            if(mala){
                c = c - 'A' + 'a';
                printf("%c", c);
                mala=0;
            }

            else
                printf("%c", c);
        }
    }
        
    printf("\n");

}

void wyczysc_bufor(void){
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF)
        ; /* wyrzucam wszystko do końca linii, łącznie z Enterem */
}

int wczytaj_liczbe(int *x){
    int ok = scanf("%d", x);
    wyczysc_bufor();
    return ok == 1; /* 1 = udało się, 0 = wpisano coś, co nie jest liczbą */
}

int main(void)
{
    int opcja=1, klucz=3, n=0;
    char tekst[LIMIT_NAPISU]={'\0'};

    while(1){
        printf("OPCJE:\n");
        printf("0 - Zakoncz program\n");
        printf("1 - Zmien tekst\n");
        printf("2 - Zmien klucz szyfrujacy (obecny: %d)\n", klucz);
        printf("3 - Wyswietl zaszyfrowany tekst\n");
        printf("4 - Wyswietl odszyfrowany tekst\n");

        if(!wczytaj_liczbe(&opcja)){
            if(feof(stdin)) return 0; /* koniec wejścia, np. Ctrl+D */
            printf("Podaj liczbe od 0 do 4\n");
            continue;
        }

        switch (opcja)
        {
        case 0:
            return 0;

        case 1:
            printf("Podaj tekst:\n");
            if(fgets(tekst, LIMIT_NAPISU, stdin) != NULL){
                n = dl_ciagu(tekst);
                if(n > 0 && tekst[n-1] == '\n')
                    tekst[n-1] = '\0'; /* usuwam Enter, który zapisał fgets */
            }
            break;

        case 2:
            printf("Podaj nowy klucz szyfrujacy:\n");
            if(wczytaj_liczbe(&klucz))
                klucz = klucz % 26; /* klucz 26 to to samo co klucz 0 */
            else
                printf("Klucz musi byc liczba, zostaje %d\n", klucz);
            break;

        case 3:
            cezar(tekst, klucz);
            break;

        case 4:
            cezar(tekst, -klucz);
            break;

        default:
            printf("Nie ma takiej opcji\n");
            break;
        }
    }

    return 0;
}