#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a=0, b=0;
    long a_pom=0, b_pom=0;
    char c=0;
    printf("Podaj dwie liczby i znak operacji arytmetycznej:\n");
    scanf("%lf %lf %c", &a, &b, &c);

    switch (c)
    {
    case '+':
        printf("wynik: %g\n", (double)a + b);
        break;

    case '-':
        printf("wynik: %g\n", (double)a - b);
        break;

    case '*':
        printf("wynik: %g\n", (double)a * b);
        break;

    case '/':
        if(b==0)
            printf("Nie można dzielic przez 0\n");
        else
            printf("wynik: %g\n", (double)a / b);
        break;
    case '%':
            a_pom = (long)a;
            b_pom = (long)b;
            if (b_pom == 0)
                printf("%ld %% %ld -> nie mozna dzielic przez 0!\n", a_pom, b_pom);
            else
                printf("%ld %% %ld = %ld\n", a_pom, b_pom, a_pom % b_pom);
            break;

    default:
        printf("bledny znak");
        break;
    }
    
    return 0;
}