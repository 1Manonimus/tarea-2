//En una Casa de Cabio necesitan construir un programa que dado como dato una cantidad expresada en dólares, convierta esa cantidad en pesos. Construir el diagrama de flujo correspondiente. Tomar en cuenta que: 1dolar ↢ 11.96pesos.
#include <stdio.h>

int main()
{
    float d;
    double p;
    const double tras=11.96;

printf("ingresa la cantidad de dolares que quiere trasformar en pesos;\n");
scanf("%f",&d);

p=d*tras;

printf("en pesos es;%.2f\n",p);

    return 0;
}
