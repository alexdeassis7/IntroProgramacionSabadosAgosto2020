#include <stdio.h>
#include <stdlib.h>
/**Simular el comportamiento de un reloj digital,
imprimiendo la hora, minutos y segundos de un día desde
las 0:0:0 hasta las 23:59:59*/

int main()
{
    for(int hs = 0 ; hs <= 23 ; hs++) //for que incrementa las horas del reloj
    {
        for(int min = 0 ; min <= 59 ; min++) //for que incrementa los minutos del reloj
        {
            for(int seg = 0 ; seg <= 59 ; seg++ )//for que incrementa los segundo del reloj
            {
                printf("%i:%i:%i\n", hs, min,seg);
            }
        }
    }

    return 0;
}
