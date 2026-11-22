#include <stdio.h>
#include <ctype.h>


#define LIMIT_NAPISU 100000

void zlicz(char *napis, int *a, int n){
    int i=0, litera=0;
    for(i=0; i<n; i++){
        litera=toupper((unsigned char)napis[i]);
        if(litera >= 'A' && litera <='Z')
        a[litera-'A']++;
    }
}

int main(void)
{
    int alfabet[26];
    int i=0, n=0;
    char napis[LIMIT_NAPISU];
    char litera='A';

    for(i=0; i<26; i++){
        alfabet[i]=0;
    }

    for(i=0; i<LIMIT_NAPISU; i++){
        napis[i]=0;
    }

    printf("Podaj ciag znakow:\n");
    fgets(napis, LIMIT_NAPISU-1, stdin);

    i=0;
    while (napis[i]!=0)
    {
        i++; n++;
    }

    zlicz(napis, alfabet, n);

    printf("Wystapienia liter w podanym ciagu znakow\n");
    for(i=0; i<26; i++){
        if(alfabet[i]>0)
            printf("%c - %d\n", litera, alfabet[i]);
        litera++;
    }

    return 0;
}