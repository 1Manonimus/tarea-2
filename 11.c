//Hacer un diagrama de flujo que calcule la suma de los números pares comprendidos entre el 10 y 50.
#include <stdio.h>

int main()
{
    int sum;
    int cont=0;
    int i;
printf("La suma de los números pares comprendidos entre 10 y 50 ;\n");

for(i=10;i<=50;i++)
{
    if(i%2==0)
    {
        sum=cont+i;
        cont=sum;
    }
}

printf("%d",sum);

    return 0;
}
}
