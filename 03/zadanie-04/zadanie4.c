#include <stdio.h>
#include <stdlib.h>

long suma_cyfr(long a)
{
    long sum = 0;
    if(a <= 0)
        return 0;
    
    sum += a%10;
    a /= 10;
    return sum + suma_cyfr(a);
}

int main(void)
{
    long a = 0;
    printf("Podaj liczbe a oblicze sume cyfr w tej liczbie:\n");
    scanf("%ld", &a);
    printf("suma cyfr w tej liczbie to: %ld", suma_cyfr(a));

    return 0;
}