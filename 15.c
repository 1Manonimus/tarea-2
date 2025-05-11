#include <stdio.h>

int main()
{
    int valores[15]={-1,2,0,-3,1,-5,1,6,0,-7,0,0,8,-9,10};
    int positivos=0;
    int negativos=0;
    int nulos=0;
    int i;

for(i=0; i<15; i++)
{
    if(valores[i]>0)
    {
        positivos=positivos+1;
    }
    else
    {
        if(valores[i]<0)
        {
            negativos=negativos+1;
        }
        else
        {
            nulos=nulos+1;
        }
    }
}
printf("En el arreglo existen;\n");
printf("%d",positivos);
printf(" valores positivos.\n");
printf("%d",negativos);
printf(" valores negativos.\n");
printf("%d",nulos);
printf(" valores nulos.\n");

    return 0;
}
