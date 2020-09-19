#include <stdio.h>
#include <stdlib.h>
/**2)	Llenar dos vectores A y B de 45 elementos cada uno, sumar el elemento uno del
 vector A con el elemento uno del vector B y así sucesivamente hasta 45,
 almacenar el resultado en un vector C,  e imprimir el vector resultante por pantalla.*/
#define TAMANIO 45
int main()
{
    //defino los 3 vectores
    int vectorA[TAMANIO];
    int vectorB[TAMANIO];
    int vectorC[TAMANIO];
    srand(time(NULL));
    //Cargamos Vector A y B luego sumamos en vector C
    for(int i = 0 ; i < TAMANIO ; i++)
    {
        vectorA[i] = rand() % 100 + 1;
        vectorB[i] = rand() % 100 + 1;
        vectorC[i] = vectorA[i] + vectorB[i] ;
        printf("%i ) %i + %i = %i \n",i, vectorA[i], vectorB[i],vectorC[i]  );
    }
    return 0;
}
