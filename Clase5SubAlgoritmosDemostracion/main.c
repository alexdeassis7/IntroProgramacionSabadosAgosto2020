#include <stdio.h>
#include <stdlib.h>
//definir el prototipo de mi subAlgoritmo
void mostrarMensajeError(int cantidad);
int sumar(int numero1 , int numero2);

int main() //Algoritmo principal
{
    printf("inicio app!\n");
    //invocamos al procedimiento
    mostrarMensajeError(5);

    //invocamos a la funcion
    int valorRetornadoPorFuncion = sumar(7 , 5);
    printf("La funcion sumar me retorno el siguiente numero : %i\n" , valorRetornadoPorFuncion);
    mostrarMensajeError(10);
    printf("Fin app!\n");
    return 0;
}
//Subalgoritmo Procedimiento
void mostrarMensajeError(int cantidad )
{
    for(int x = 0 ; x < cantidad ; x++)
    {
        printf("ERROR ,intente Nuevamente\n");
    }
}
//Subalgoritmo Funcion
int sumar(int numero1 , int numero2)
{
    int resultado = numero1 + numero2;
    return resultado;
}
