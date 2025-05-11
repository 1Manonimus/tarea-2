//Hacer un diagrama de flujo que calcule e imprima el producto de los N primeros números naturales.
#include <stdio.h>

int main()
{
int n;
int i;
int mul;
int con=1;

printf("Ingrese un número y se obtendra la multiplicación de todos los números antesesores a este.\n");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    mul=con*i;
    con=mul;
}

printf("la multiplicación es; %d",mul);

    return 0;
}
