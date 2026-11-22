#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char imie[100];
    int i=0;
    printf("Podaj swoje imie:\n");
    scanf("%99s", imie);

    /* z użyciem ctype.h */
    printf("%c", toupper((unsigned char)imie[0]));
    i=1;
    while(imie[i] != '\0'){
        printf("%c", tolower((unsigned char)imie[i]));
        i++;
    }
    printf("\n");

    /* z użyciem tabeli ascii */
    if(imie[0] >= 'a' && imie[0] <= 'z')/*pierwsza litera jest duża*/
        printf("%c", imie[0] - 'a' + 'A');
    else
        printf("%c", imie[0]);

    i=1;
    while(imie[i] != '\0'){/*upewniam się że reszta imienia jest napisana z małych liter*/
        if(imie[i] >= 'A' && imie[i] <= 'Z')
            printf("%c", imie[i] - 'A' + 'a');
        else
            printf("%c", imie[i]); 
        i++;  
    }
    printf("\n");

    return 0;
}