//Construir un diagrama de flujo que pueda determinar, dados dos números enteros, si un número es divisor del otro.
#include <stdio.h>

int main()
{
int a;
int b;
printf("Ingresa dos números se dira si el número es divisible entre otro.\n");
printf("Ingresar un número;\n");
scanf("%d",&a);
printf("Ingresa otro número;\n");
scanf("%d",&b);

if(a%b==0)
{
    printf("Los números son divisibles.\n");
}
else
    {
        printf("Los números no son divisibles.\n");
    }
    
if (b==0)
{
    printf("División sobre cero, es invalida.\n");
}

    return 0;
}
