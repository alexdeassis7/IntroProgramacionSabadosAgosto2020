#include <stdio.h>
#include <stdlib.h>
/**4) Calcular la utilidad que un trabajador recibe en el reparto
anual de utilidades si este se le asigna como un porcentaje
 de su salario mensual que depende de su antig�edad en la empresa
 de acuerdo con la siguiente tabla :
 Tiempo             	              Utilidad
Menos de 1 a�o	                    5% del salario
1 a�o o m�s y menos de 2 a�os 	    7% del salario
2 a�os o m�s y menos de 5 a�os	    10% del salario
5 a�os o m�s y menos de 10 a�os 	15% del salario
10 a�os o mas 	                    20% del salario*/
int main()
{
    //defino mis variables de trabajo
    float utilidad = 0, salarioMensual = 0 ;
    int antiguedad = 0;
    //solicitamos datos de entrada
    printf("Inicio del Programa\n");
    printf("Ingrese su salario mensual \n");
    scanf("%f",&salarioMensual);
    printf("Ingrese su antiguedad en la empresa \n");
    scanf("%i",&antiguedad);
    //procesamos los datos
    if(antiguedad < 1 )
    {
        utilidad = salarioMensual * 0.05 ;//Menos de 1 a�o
    }
    else if (antiguedad >= 1 && antiguedad < 2)
    {
        utilidad = salarioMensual * 0.07 ;//1 a�o o m�s y menos de 2 a�os
    }
    else if (antiguedad >= 2 && antiguedad < 5)
    {
        utilidad = salarioMensual * 0.10 ;//2 a�os o m�s y menos de 5 a�os
    }
    else if (antiguedad >= 5 && antiguedad < 10)
    {
        utilidad = salarioMensual * 0.15 ;//5 a�os o m�s y menos de 10 a�os
    }
    else
    {
        utilidad = salarioMensual * 0.20 ;//10 a�os o mas
    }
    //mostramos los datos por pantalla
    printf("Su utilidad anual sera de $ %.2f ", utilidad );
    return 0;
}


















