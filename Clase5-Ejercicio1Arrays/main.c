#include <stdio.h>
#include <stdlib.h>
/**1)	Calcular el promedio de 50 valores almacenados en un Vector.
Determinar además cuantos son mayores que el promedio,
imprimir el promedio, el número de datos mayores que el
promedio y una lista de valores mayores que el promedio .*/
#define CANTIDAD 50
int main()
{

    float promedio = 0, acumuladorNumeros = 0 ;
    int vectorNotas [CANTIDAD];
    int MayoresAlPromedio = 0 ;
    srand(time(NULL));//seteamos la semilla capturando la hora del Sistema operativo
    //srand(getpid());seteamos la semilla capturando el id de proceso en ejecucion
    for(int indice = 0 ; indice < CANTIDAD ; indice++ )
    {
        vectorNotas[indice] = rand() % 100 + 1;


        /**
        numero = rand() % 11 + 20 //ESte enta entre 20 y 30
        numero = rand () % (N-M+1) + M // este esta entre M y N

        */

        //acumuladorNumeros = acumuladorNumeros + vectorNotas[indice];
        acumuladorNumeros += vectorNotas[indice];
        printf("vectorNotas[%i] = %i \n",indice,vectorNotas[indice]);
    }

    promedio = acumuladorNumeros / CANTIDAD ;

    for(int i = 0 ; i < CANTIDAD ; i ++)
    {
        if(vectorNotas[i] > promedio)
        {
            MayoresAlPromedio++;
        }
    }

    int listaMayoresAlPromedio[MayoresAlPromedio];
    int j = 0 ;
    for(int x = 0 ; x < CANTIDAD ; x++ ){
        if(vectorNotas[x] > promedio){
            listaMayoresAlPromedio[j] = vectorNotas[x] ;
            j++;
        }
    }

    printf("promedio : %.2f \n",promedio);
    printf("La cantidad de datos mayores al promedio es : %i \n",MayoresAlPromedio);
    printf("La lista de datos mayores al promedio es la siguiente : \n");

    for(int p = 0 ; p < MayoresAlPromedio ; p++){
        printf("%i -",listaMayoresAlPromedio[p]);
    }

    return 0;
}
