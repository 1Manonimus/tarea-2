//Construir un diagrama de flujo tal que, dado el radio de un círculo, calcule e imprima el área y la circunferencia. El ́área del círculo se calcula como Área = π ∗ radio2 y la circunferencia se calcula como Circunferencia = 2 ∗ π ∗ radio.
#include <stdio.h>
#include <math.h>

int main()
{
int r;
double a;
double c;
const double pi=M_PI;

printf("ingresa el radio de un círculo, se obtendra su área y su circunferencia;\n");
scanf("%d",&r);

a=pi*pow(r,2);
c=2*pi*r;

printf("el área del circulo es;%.2f\n",a);
printf("la circunferencia del circulo es;%.2f\n",c);

    return 0;
}
