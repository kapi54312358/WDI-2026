#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int czas=0, godziny=0, minuty=0, sekundy=0;
    printf("Podaj nieujemna liczbe sekund:\n");
    scanf("%d", &czas);
    godziny=czas/3600;
    czas=czas-godziny*3600;
    minuty=czas/60;
    sekundy=czas%60;   
    printf("godziny: %d,\n minuty: %d,\n sekundy: %d", godziny, minuty, sekundy);

    return 0;
}