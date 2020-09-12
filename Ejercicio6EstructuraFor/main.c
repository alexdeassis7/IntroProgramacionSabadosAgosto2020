#include <stdio.h>
#include <stdlib.h>
#define CANTNOTAS  3
int main()
{
  float nota=0, acumulador=0, promedio=0, menor=0;

    printf("Ingrese su nota segun numero de alumno. El numero de alumno es 1\n");
    scanf("%f",&nota);
    menor = nota;
    acumulador = nota;
    for(int i=2; i<=CANTNOTAS; i++){
            printf("Ingrese la nota segun numero de alumno. El numero de alumno es %i.\n",i);
            scanf("%f",&nota);
            if(menor>nota){
                menor=nota;
            }
            acumulador = nota + acumulador;
    }
    promedio= acumulador/CANTNOTAS;

    printf("El promedio es %f.\n",promedio);
    printf("La nota mas baja es %f.\n",menor);
    printf("Fin de la app.");
    return 0;
}
