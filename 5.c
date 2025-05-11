//En un negocio de productos electrodomésticos aplican un descuento del 8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como dato el monto de la compra del cliente, calcule lo que el cliente debe pagar. Hacer el diagrama de flujo correspondiente.
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
