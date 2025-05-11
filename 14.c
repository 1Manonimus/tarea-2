//construya un programa tal que dado como entrada un arreglo unidimensional de enteros y un n ́umero entero, determine cuántas veces se encuentra el número dentro del arreglo.
#include <stdio.h>

int main()
{
    int valores[10]={1,2,1,3,1,5,1,6,1,7};
    int a=1;
    int i;
    int acum=0;
    
for(i=0; i<10; i++)
{
    if(valores[i]==a)
    {
        acum=acum+1;
    }
}
    
    printf("%d",a);
    printf(" se repiten %d",acum);
    printf(" veces");

    return 0;
}
