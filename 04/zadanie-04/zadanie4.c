#include <stdio.h>
#include <ctype.h>

#define LIMIT_NAPISU 100000

void zlicz(char *napis, int *a){
    int i=0, litera=0;
    while(napis[i] != '\0'){
        litera=toupper((unsigned char)napis[i]);
        if(litera >= 'A' && litera <='Z')
            a[litera-'A']++;
        i++;
    }
}

int anagram(char *s1, char *s2){
    int a1[26], a2[26], i=0;
    for(i=0; i<26; i++){  /*upewniam się że zadeklarowane tablice są puste*/
        a1[i]=0;
        a2[i]=0;
    }

    zlicz(s1, a1);
    zlicz(s2, a2);

    for(i=0; i<26; i++){
        if(a1[i]!=a2[i])
            return 0;
    }

    return 1;
}

int main(void)
{
    char slowo1[LIMIT_NAPISU], slowo2[LIMIT_NAPISU];
    printf("Podaj pierwsze slowo:\n");
    scanf("%99999s",slowo1);
    printf("Podaj drugie slowo:\n");
    scanf("%99999s",slowo2);
    
    if(anagram(slowo1, slowo2))
        printf("Podane slowa sa anagramami\n");
    else   
        printf("Podane slowa nie sa anagramami\n");

    return 0;
}