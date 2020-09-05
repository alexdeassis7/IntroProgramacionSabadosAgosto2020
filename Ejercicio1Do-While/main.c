#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar 10 números enteros por
teclado y que muestre por pantalla el promedio.*/
int main()
{
    int limite = 10 , contador = 1 , sumaNumeros = 0, num = 0;
    float promedio = 0 ;

    do{
        printf("Ingrese el numero %i\n",contador);
        scanf("%i",&num);
        sumaNumeros = sumaNumeros + num;
        contador = contador + 1;
    }while(contador <= limite);
    //promedio
    promedio = sumaNumeros / limite;

    printf("el promedio de los numeros Ingresados es : %f\n",promedio);
    return 0;
}
