#include <stdio.h>
#include <math.h>

int main()
{
int n1;
int n2;
double di;

    
    printf("Se dira si el primer número es divisible entre el segundo número.\n");
    printf("Número 1; \n");
    scanf("%d",&n1);
    printf("Número 2; \n");
    scanf("%d",&n2);

di=n1/n2;


if(di == floor(di))
{
    printf("%d ",n1); 
    printf("es divisible entre %d\n",n2);
}
else
{
    printf("%d ",n1); 
    printf("no es divisible entre %d\n",n2);
}
    return 0;
}
