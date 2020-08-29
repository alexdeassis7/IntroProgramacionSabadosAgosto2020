#include <stdio.h>
#include <stdlib.h>
/**1) Suponga que un individuo desea invertir su capital en un banco  y desea saber
cuanto dinero ganara despues de un mes si el banco paga a razon de 2% mensual */
int main()
{
    //definimos e inicializamos nuestras variables de trabajo
    float capital = 0 , ganancia = 0 ,saldoFinal = 0;
    //Que entra ? capital
    printf("Por Favor Ingrese el capital que desea invertir en el banco este mes\n");
    scanf("%f", &capital);
    //Que se Procesa ? ganancia
    ganancia = capital * 0.02 ;
    saldoFinal = capital + ganancia;
    //Que Sale? ganancia o ganancia + capital
    printf("Usted invirtio $ %.3f y obtuvo $ %.2f de ganancia \n", capital , ganancia);
    printf("Su saldo actual es de $ %f \n", saldoFinal);

    return 0;
}
