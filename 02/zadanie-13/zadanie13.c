#include <stdio.h>
#include <stdlib.h>

long fib (int a)
{
    long i=0, temp1=1, temp2=1, temp3=2;
    if(a==1)
        return 1;
    if (a==2)
        return 1;    

    for(i=3; i<=a; i++)
    {
        temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;
    }

    return temp3;
}

int main(void)
{
    int liczba=0;
    printf("Podaj ktora liczbe ciagu fibonaciego chcesz obliczyc:\n");
    scanf("%d", &liczba);
    if(liczba<=0)
    {
        printf("bledny wyraz ciagu");
        return 0;
    }
    printf("ta liczba to: %ld", fib(liczba));

    return 0;
}