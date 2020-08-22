// Comentario de linea ( Ctrl + shift + c )
/*Soy un
comentario de Bloque*/
// Importamos librerias / dependecias para utilizar en nuestra app
#include <stdio.h>
#include <stdlib.h>

int main()//Funcion Principal o Punto de Inicio de Ejecucion
{//cuerpo del main
    printf("Hello world!!!\n\n");
    printf("mi primer programa en C \n");
     // Definimos variables Primitivas
     //Ejemplo : nombre , num_horas ,calificacionPromedioMaximo ,
     int numero = 0; //defino e inicializo una variable de tipo entera llamada numero
     char letra = 'p';
     float num1 = 57.1, num2 = 0 ;
     double numeroConMuchosDecimales = 0;
     float numero1 = 25 ;
     float numero2 = 100 ;

     float resultado = numero1 + numero2 ;
     //mostramos el resultado por pantalla
     printf("El resultado de la suma de %f + %f = %f" ,numero1,numero2, resultado);

    return 0;
}
