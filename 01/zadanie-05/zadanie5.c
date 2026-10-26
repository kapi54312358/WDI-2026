#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float ocena1=0, ocena2=0, ocena3=0, ocena4=0, ocena5=0; 
    printf("Wpisz 5 ocen oddzielonych spacja:\n");
    scanf("%f %f %f %f %f", &ocena1, &ocena2, &ocena3, &ocena4, &ocena5);
    printf("Srednia z podanych ocen to: %f", (float)((ocena1 + ocena2 + ocena3 + ocena4 + ocena5)/5));

    return 0;
}