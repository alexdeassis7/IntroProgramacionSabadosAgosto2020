#include <stdio.h>
#include <stdlib.h>
/**3) Un maestro desea saber que porcentaje de hombres
 y que porcentaje de mujeres hay en un grupo de estudiantes*/
int main()
{
    //definimos las variables de trabajo
    float numMujeres = 0, numHombres = 0, totalAlumnos = 0,porcentajeMujeres =0,porcentajeHombres=0;
    //solicitamos datos al usuario
    printf("Ingrese por favor la cantidad de Alumnos Hombres\n");
    scanf("%f",&numHombres);
    printf("Ingrese por favor la cantidad de Alumnas Mujeres\n");
    scanf("%f",&numMujeres);
    //procesamos la informacion
    totalAlumnos = numHombres + numMujeres ;
    porcentajeMujeres = numMujeres * 100 / totalAlumnos;
    porcentajeHombres = numHombres * 100 / totalAlumnos;
    //mostramos los resultados
    printf("El porcentaje de hombres de su curso es %c %.2f \n",37, porcentajeHombres);
    printf("El porcentaje de mujeres de su curso es %c %.2f \n",37, porcentajeMujeres);
    printf("El total de alumnos es %.2f " , totalAlumnos );

    return 0;
}
