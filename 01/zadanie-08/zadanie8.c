#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a=0, b=0;
    char c=0;
    printf("Podaj dwie liczby calkowite i znak operacji arytmetycznej:\n");
    scanf("%lf %lf %c", &a, &b, &c);

    switch (c)
    {
    case '+':
        printf("wynik: %f\n", (double)a+b);
        break;

    case '-':
        printf("wynik: %f\n", (double)a-b);
        break;

    case '*':
        printf("wynik: %f\n", (double)a*b);
        break;

    case '/':
        if(b==0)
            printf("Nie można dzieliz przez 0\n");
        else
            printf("wynik: %f\n", (double)a/b);
        break;

    default:
        break;
    }
    
    return 0;
}