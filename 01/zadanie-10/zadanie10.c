#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0, n=0;
    float ocena[4];
    float suma=0; 
    printf("Wpisz 5 ocen oddzielonych spacja:\n");
    for(i=0; i<5; i++){
        scanf("%f", &ocena[i]);
        suma+=ocena[i];
        if(ocena[i]<3)
            n++;
    }
    printf("Srednia z podanych ocen to: %f\n", (float)((suma)/i));
    printf("Liczba ocen niedostatecznych: %d", n);
    return 0;
}