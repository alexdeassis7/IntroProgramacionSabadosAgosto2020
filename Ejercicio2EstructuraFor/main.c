#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar N números por teclado y
que muestre por pantalla el mayor y menor de ellos.*/
int main()
{
    int n = 0 , num = 0 , mayor = 0 , menor = 0 ;
    printf("Ingrese la cantidad de numeros con los que va a trabajar\n");
    scanf("%i",&n);
    printf("Ingrese un numero \n");
    scanf("%i",&num);
    mayor = num ;
    menor = num ;
    for(int i = 2 ; i <= n   ; i++ ){
        printf("Ingrese un numero \n");
        scanf("%i",&num);
        if(mayor < num){ 45 < 155
            mayor = num;
        }
        if(menor > num){
            menor = num;
        }
    }
    printf("El mayor numero ingresado es %i \n" , mayor);
    printf("El menor numero ingresado es %i \n" , menor);
    return 0;
}
