//Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta en ferrocarril, conociendo la distancia de ida y el tiempo de estancia. También se sabe que si el numero de días de estancia es mayor a 7 y la distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene un descuento del 30%. El precio por km es de $0.23.
#include <stdio.h>

int main()
{
int días;
float distancia;
float distanciat;
float precio;
float preciod;
float pre;
float preciof;

printf("¿Cuántos días estará en su estancia;\n");
scanf("%d",&días);
printf("¿Cuántos kilometros es la distancia que recorrera hasta su estancia;\n");
scanf("%f",&distancia);


distanciat=distancia*2;
precio=distanciat*0.23;
preciof=precio;

if(días>7 & distanciat>800)
{
    preciod=precio*30;
    pre=preciod/100;
    preciof=precio-pre;
}

printf("El precio de tu viaje es de;%.2f\n",preciof);


    return 0;
}
