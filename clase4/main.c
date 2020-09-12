#include <stdio.h>
#include <stdlib.h>
/*2) Desarrollar un algoritmo que permita ingresar letras mayúsculas y que
las muestre por pantalla. El programa debe finalizar cuando se hayan
ingresado 10 letras mayúsculas.*/
int main()
{
    int limite = 10 , contador = 0;
    char letra ="";
    printf("Ingresa letras mayusculas . El programa finalizara cuando se hayan ingresado %i letras mayusculas \n",limite);

    do{

        do{
           scanf("%c",&letra);
           fflush(stdin);
        }while(!(letra >= 'A' && letra <= 'Z'));

        printf("%c ES MAYUSCULA\n" ,letra );
        contador ++ ;
        printf("%i\n"  , contador);
    }while(contador <  limite );

    printf("fin de la app ");

    return 0;
}
