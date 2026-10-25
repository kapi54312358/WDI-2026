#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wiek=0;
    char inicjal=0;

    printf("Wpisz swoj inicjal i wiek oddzielone spacja:\n");
    scanf("%c %d", &inicjal, &wiek);
    printf("Inicjal: %c, wiek: %d\n", inicjal, wiek);

    return 0;
}