#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar un n�mero entero
comprendido entre 1 y 7, y que muestre por pantalla el d�a de la semana al
que se corresponde*/
int main()
{
    //defino mis variables de trabajo
    int numeroIngresado = 0;
    printf("Ingrese un numero comprendido entre 1 y 7 \n");
    scanf("%i",&numeroIngresado);
    switch( numeroIngresado )
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Lunes\n");
        break;
    case 3:
        printf("Martes\n");
        break;
    case 4:
        printf("Miercoles\n");
        break;
    case 5:
        printf("Jueves\n");
        break;
    case 6:
        printf("Viernes\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("no exite ningun dia de la semana que se corresponda con el numero %i \n" ,numeroIngresado);
    }
    printf("Fin de la app!\n");

    return 0;
}
