#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("inicio de la app\n");
    printf("mostramos los numeros del 1 al cien \n");

    for(int i = 1 ; i <= 100 ; i++)
    {
        printf("%i\n", i);
    }

    printf("mostramos los numeros pares del 0 al cien \n");
    for(int x = 0 ; x <= 100 ; x = x + 2 )
    {
        printf("%i\n", x);
    }


    printf("fin de la app\n");
    return 0;
}
