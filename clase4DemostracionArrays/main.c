#include <stdio.h>
#include <stdlib.h>

int main()
{   int tamanioVector = 10000  ;
    //defino un array
    int notas[tamanioVector];
    //asignacion
    notas[0] = 22;
   /* notas[1] = 15;
    notas[2] = 5;
    notas[3] = 1;
    notas[4] = 135;
    notas[5] = 52;
    notas[6] = 11;*/
    //inicializamos el vector en cero
    for(int indice = 0 ; indice < tamanioVector ; indice ++){
            notas[indice]= 0;
    }

    //lectura
    printf("notas[0] :%i\n",notas[0]);
    printf("notas[1] :%i\n",notas[1]);
    printf("notas[2] :%i\n",notas[2]);
    printf("notas[3] :%i\n",notas[3]);
    printf("notas[4] :%i\n",notas[4]);
    printf("notas[5] :%i\n",notas[5]);
    printf("notas[6] :%i\n",notas[6]);

      printf("mostramos el vector con un for\n");
    for(int indice = 0 ; indice < tamanioVector ; indice ++){
            printf("notas[%i] = %i\n",indice , notas[indice]);
    }



    return 0;
}
