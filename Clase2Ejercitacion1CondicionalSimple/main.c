#include <stdio.h>
#include <stdlib.h>
/**1) Determinar si un alumno aprueba un curso de programación,
 sabiendo que aprobara si su promedio de tres calificaciones es mayor
 o igual a 7; reprueba en caso contrario.*/
int main()
{
    //defino mis variables de trabajo
    float nota1 = 0, nota2 = 0,nota3 = 0, promedio = 0;
    printf("ingrese la nota 1 \n");
    scanf("%f",&nota1);
    printf("ingrese la nota 2 \n");
    scanf("%f",&nota2);
    printf("ingrese la nota 3 \n");
    scanf("%f",&nota3);

    promedio = (nota1 + nota2 + nota3) / 3;
    if(promedio >= 7){
         printf("El promedio de sus 3 notas es %.2f \n" , promedio);
         printf("CONGRATULATION APROBADO!!!\n");
    }

    if(promedio < 7){
        printf("El promedio de sus 3 notas es %.2f \n" , promedio);
        printf("DESAPROBADO!!!!!!! \n");
    }
    printf("FIN DE LA APP \n");
    return 0;
}
