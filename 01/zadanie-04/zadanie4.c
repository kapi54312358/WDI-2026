#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x=0, y=0, z=0;
    printf("Podaj 3 liczby oddzielone spacja, 2 liczba nie moze byc 0:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("suma 3: %d\n", x+y+z);
    printf("roznica pierwszych 2: %d\n", x-y);
    printf("iloczyn 1 i 3: %d\n", x*z);
    printf("iloraz: %f\n", (double)z/y);

    return 0;
}