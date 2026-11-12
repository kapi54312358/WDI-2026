#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int podloga(double a) {
    int t = (int)a;
    if (fabs(a) > abs(t) && a < 0)
        return t - 1;
    return t;
}

int sufit(double a) {
    int t = (int)a;
    if (fabs(a) > abs(t) && a > 0)
        return t + 1;
    return t;
}

int zaokraglij(double a) {
    int t = (int)a;
    if (fabs(a) - abs(t) >= 0.5)
        return (a < 0) ? t - 1 : t + 1;
    return t;
}

int main(void)
{
    double a=0;
    printf("Podaj liczbe do zaokroglenia:\n");
    scanf("%lf", &a);
    printf("sufit:%d\n podloga:%d\n zaokraglenie:%d\n", sufit(a), podloga(a), zaokraglij(a));

    return 0;
}