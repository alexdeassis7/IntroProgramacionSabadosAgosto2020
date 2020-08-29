#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>//incluye soporte para ampliar el tipo de caracteres
#include <locale.h>//incluye soporte para distintos tipos de formatos(fechas ,modenas ,etc)
/**2) Una tienda ofrece un descuento del 15% sobre el total
 de la compra y un cliente desea saber cuanto debera pagar
  finalmente por su compra */
#define PORCENTAJE 0.15  //Definimos una constante
int main()
{  //Ejemplo de impresion de acento
    printf("%c ponemos acento o tilde \n" ,162 );
    setlocale(LC_ALL, "");
    printf("ó á  \n");
      //Definimos las variables de trabajo
    float totalCompra = 0 , descuento = 0 ,total_a_pagar = 0 ;
    //definimos una variable inmutable
    const float PORCENTAJEINMUTABLE = 0.15 ;
    // PORCENTAJEINMUTABLE = 0.12; ESTO NO SE PUEDE !!!!
    //solitar los datos al usuario
    printf("Por favor ingrese el valor total de la compra\n");
    scanf("%f",&totalCompra);//guardamos el datos en la variable totalCompra
    //procesmos la informacion
    descuento = totalCompra * PORCENTAJE ;
    total_a_pagar = totalCompra - descuento ;
    //mostramos resultados por pantalla
    printf("El total a pagar es $ %.2f \n", total_a_pagar);
    printf("Usted recibio un descuento de $ %.2f ", descuento );
    return 0;
}
