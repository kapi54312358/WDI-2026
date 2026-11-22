#include <stdio.h>

#define LIMIT_NAPISU 100000

int dl_ciagu(char *a);
int czy_int(char *a);
int konwertuj(char *a);

int main(void)
{
    char ciag[LIMIT_NAPISU];

    printf("Podaj ciag znakow:\n");
    scanf("%99999s",ciag);
    
    if(czy_int(ciag)==0)
        printf("ciag znakow nie jest liczba calkowita");
    else
        printf("ciag znakow jest liczba calkowita %d", konwertuj(ciag));
        

    return 0;
}

int dl_ciagu(char *a){
    int i=0;

    while(a[i]!='\0'){
        i++;
    }

    return i;
}

int czy_int(char *a){
    int i=0, n=dl_ciagu(a);

    if(a[i] == '-')
        i++;

    if(n==i) return 0;

    for(; i<n; i++){
        if(a[i] < '0' || a[i] > '9')
            return 0;
    }

    return 1;
}

int konwertuj(char *a){
    int i=0, ujemna=1, n=dl_ciagu(a);
    long liczba=0;

    if(a[0]=='-'){
        ujemna=-1;
        i++;
    }

    for(; i<n; i++){
        liczba = liczba * 10 + (a[i] - '0');
    }

    return liczba * ujemna;
}