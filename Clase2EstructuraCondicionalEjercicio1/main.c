#include <stdio.h>
#include <stdlib.h>
/**1) Implementar un algoritmo que calcule y muestre por pantalla el valor
final de la compra de un artículo. El algoritmo debe permitir el ingreso del
precio del artículo y la cantidad de artículos. Si el subtotal es superior a
1000, entonces se debe aplicar un descuento del 10 % */
int main()
{
    float precio=0,catidad=0,subTotal=0,totalCompra=0,descuento=0;
    printf("Ingrese el precio del articulo \n");
    scanf("%f",&precio);
    printf("Ingrese la cantidad de articulos \n");
    scanf("%f",&catidad);
    subTotal = precio * catidad;

    if(subTotal > 1000){
        descuento = subTotal * 0.10 ;
    }

    totalCompra = subTotal - descuento;

    if( descuento > 0 ){
        printf("Se aplico un descuento de %.2f\n" , descuento);
    }

    printf("El valor final de la compra es : %.2f\n " ,totalCompra);
    return 0;
}
