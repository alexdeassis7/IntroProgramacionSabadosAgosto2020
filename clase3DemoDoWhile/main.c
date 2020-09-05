#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Antes del Do WHILE \n");
    int contador = 0 ;
//mostramo numeros pares del 0 al 10

    do
    {
        printf("%i \n",contador);
        contador +=2 ;
    }
    while(contador <= 10);
    printf("Despues del Do WHILE \n");

    return 0;
}
