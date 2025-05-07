#include <stdio.h>

int main()
{
    float monto;
    float porcentaje;
    float suma;
    float res;
printf("¿Cuál es el monto de que la compra?\n");
scanf("%f",&monto);

if (monto>2500)
{
    porcentaje=monto*8;
    suma=porcentaje/100;
    res= monto-suma;
    monto=res;
}

printf("la compra es de;%.2f\n",monto);

    return 0;
}
