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
