#include <stdio.h>
#include <stdlib.h>
/*1)	Calcular el promedio de un alumno que tiene 7 calificaciones
en la materia de Diseño Estructurado de Algoritmos.*/
int main()
{
   float notaIngresada = 0,sumatoriaNotas = 0 ,promedio = 0;
   for(int i = 1 ; i <=7 ; i++){
        printf("ingrese la nota %i \n" , i);
        scanf("%f",&notaIngresada);
        sumatoriaNotas += notaIngresada ;
   }
    printf("la suma de las notas es %.2f " , sumatoriaNotas);
    promedio = sumatoriaNotas / 7;
    printf("El promedio es %.2f" , promedio);
    return 0;
}
