#include <stdio.h>

int main()
{
    int sum;
    int cont=0;
    int i;
printf("La suma de los números pares comprendidos en los primeros 50 números es;\n");

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
