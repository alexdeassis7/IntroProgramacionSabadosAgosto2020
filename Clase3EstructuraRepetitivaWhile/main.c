#include <stdio.h>
#include <stdlib.h>
/**1)	Calcular el promedio de un alumno que tiene 7
calificaciones en la materia de Diseño Estructurado de Algoritmos.*/
int main()
{
    //variables
    float notaIngresada= 0, promedio = 0 , acumuladorNotas = 0;
    int contador = 1 ;

    while(contador <= 7)
    {
        printf("ingrese la nota %i \n",contador);
        scanf("%f",& notaIngresada);
        acumuladorNotas += notaIngresada;// acumuladorNotas =  acumuladorNotas + notaIngresada;
        contador ++;
    }

    promedio = acumuladorNotas / 7;
    printf("su promedio es de %.2f",promedio);

    return 0;
}











