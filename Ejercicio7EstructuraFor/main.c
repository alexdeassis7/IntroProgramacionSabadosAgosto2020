#include <stdio.h>
#include <stdlib.h>
/**7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
 Imprimir el multiplicando , el multiplicador y el producto*/
int main()
{
    int num = 0 ,resultado = 0 ;
    printf("Ingrese el numero de la tabla de desea conocer\n");
    scanf("%i",&num);
    printf("la tabla del %i es : \n" ,num);
    for(int x = 1 ; x <= 10 ; x++ ){
        resultado = num * x;
        printf("%i X %i = %i  \n",num, x ,resultado);
    }

    printf("fin app!\n");
    return 0;
}
