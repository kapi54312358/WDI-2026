#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int miesiac=0;
    printf("Podaj miesiac 1-12:\n");
    scanf("%d", &miesiac);
    
    switch (miesiac)
    {
    case 1:
    case 2:
    case 3:
        printf("pierwszy kwartal");
        break;
    case 4:
    case 5:
    case 6:
        printf("drugi kwartal");
        break;
    case 7:
    case 8:
    case 9:
        printf("trzeci kwartal");
        break;
    case 10:
    case 11:
    case 12:
        printf("czwarty kwartal");
        break; 
    
    default:
        printf("podales zla liczbe");
        break;
    }


    return 0;
}