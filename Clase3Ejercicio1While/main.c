#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar dos números enteros
positivos (X e N) y se muestre por pantalla la N-ésima potencia de X.*/
int main()
{
    int baseX = 0, exponenteN = 0, potencia = 1;
    printf("por favor ingrese dos numeros positivos \n");
    printf("ingrese base \n");
    scanf("%i",&baseX);
    printf("ingrese exponente \n");
    scanf("%i",&exponenteN);
    if((baseX > 0 ) && (exponenteN > 0))
    {
        printf("Ponetencia de base %i y exponente %i \n",baseX ,exponenteN);
        while(exponenteN > 0){
            potencia = potencia * baseX;//calculo la potencia
            exponenteN = exponenteN - 1;
        }
        printf("la potencia es %i ", potencia );
    }else{
         printf("Debe ingresar numeros positivos \n");
    }

    return 0;
}
