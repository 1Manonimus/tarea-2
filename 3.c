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
