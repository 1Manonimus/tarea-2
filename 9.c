//Haga un diagrama de flujo para obtener la tabla de multiplicar de un número entero N, comenzando desde el 1.
#include <stdio.h>

int main()
{
int n;
int i;
int ter;
printf("Ingresa un número al que se obtendra su tabla de multiplicar.\n");
scanf("%d",&n);

for(i=1; i<=10; i++)
{
    ter=n*i;
    printf("%d- ",i);
    printf("%d\n", ter);
}

    return 0;
}
