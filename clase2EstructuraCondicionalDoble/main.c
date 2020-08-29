#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita determinar
si un número ingresado por teclado es positivo o negativo. */
int main()
{
    int numeroIngresado = 0 ;

    printf("Ingrese por favor un numero entero  \n");
    scanf("%i",&numeroIngresado);
        //EJEMPLO CONDICIONAL DOBLE
    if(numeroIngresado > 0 ){
        printf("El numero que usted acaba de ingresar es positivo \n");
    }else if(numeroIngresado < 0){
         printf("El numero que usted acaba de ingresar es Negativo \n");
    }else {
        printf("El numero que usted acaba de ingresar es Neutro \n");
    }
    return 0;
}
