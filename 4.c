//Una persona invierte en un banco una determinada cantidad de dinero y a una cierta tasa de inter ́es mensual. Construya un diagrama de flujo que permita obtener el monto de dinero que obtendr ́a al finalizar el mes.

#include <stdio.h>

int main()
{
float n;
float i;
float por;
float mul;
float res;
printf("Ingrese la cantidad de dinero que invertira este mes;\n");
scanf("%f",&n);
printf("ingrese la el porcentaje de interes;\n");
scanf("%f",&i);

por=i/100;
mul= por*n;
res=n+mul;

printf("al final del mes obtendras;%.2f\n",res);
    return 0;
}
