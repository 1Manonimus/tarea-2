//Construya un diagrama de flujo que lea 100 números naturales y cuentecuántos de ellos son positivos, negativos o nulos.
#include <stdio.h>

int main()
{
int n;
int i;
int contp=0;
int positivos=0;
int contn=0;
int negativos=0;
int contnu=0;
int nulos=0;
printf("Ingrese 100 números, se contara cuantos son positivos, cuantos son negativos y cuantos son nulos.\n");

for(i=1; i<=100; i++)
{
    printf("valor ");
    printf("%d:\n",i);
    scanf("%d",&n);

if(n>0)
{
positivos=contp+1;
contp=positivos;
}
else
{
    if (n<0)
    {
    negativos=contn+1;
    contn=negativos; 
    }
    else
    {
    nulos=contnu+1;
    contnu=nulos;
}
}
}

printf("Se anotó;\n");
printf("%d ",positivos);
printf("números positivos.\n");
printf("%d ",negativos);
printf("números negativos.\n");
printf("%d ",nulos);
printf("números nulos.\n");

    return 0;
}
