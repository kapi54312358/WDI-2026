#include <stdio.h>
#include <stdlib.h>

long suma_fib (int a)
{
    long i=0, temp1=1, temp2=1, temp3=2, suma=0;
    if(a==1)
        return temp1;
    if (a==2)
        return temp1+temp2;
    suma=temp1+temp2;
    for(i=3; i<=a; i++)
    {
        temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;
        suma+=temp3;
    }
    
    return suma;
    
}

int main(void)
{
    int liczba=0;
    printf("Podaj liczbe aby obliczyc sume n-liczb ciagu fibonaciego:\n");
    scanf("%d", &liczba);
    if(liczba<=0)
    {
        printf("bledny wyraz ciagu");
        return 0;
    }
    printf("ta suma to: %ld", suma_fib(liczba));

    return 0;
}