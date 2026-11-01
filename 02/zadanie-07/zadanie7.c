#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const unsigned granica = 20U;
    unsigned i=0;
    long unsigned suma=0;
    for (i=1; i<=granica; i++)
    {
        if(i % 3 == 0)
            suma+=i;
    }

    printf("Suma = %lu", suma);

    return 0;
}