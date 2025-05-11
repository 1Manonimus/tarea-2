//Dado como dato el sueldo de un trabajador considere un aumento del 15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario. Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de flujo correspondiente.
#include <stdio.h>

int main()
{
float s;
float pro;
float mul;
float res;

{
    float n;
printf("ingrese su sueldo para saber su aumento de salario;\n");
scanf("%f",&s);


if(s<1000 & s>0)

{
    pro=s*15;
    mul=pro/100;
    res=s+mul;
    printf("el aumento de suelo es;%.2f\n",res);
}
else
{
if(s>=1000)
{
    pro=s*12;
    mul=pro/100;
    res=s+mul;
    printf("el aumento de suelo es;%.2f\n",res);
}
else
{
    printf("el suelo no es valido.\n");
}
}
}
    return 0;
}
