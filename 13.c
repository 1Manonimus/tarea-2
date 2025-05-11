//Escribir un diagrama de flujo tal que dado como entrada un arreglo unidimensional de enteros, obtenga como resultado la suma de los mismos.
#include <stdio.h>

int main()
{
    int valores[5]={25,23,101,78,43};
    int sum;
    int i;
    int con=0;
    
for(i=0; i<5; i++)
{
    sum=valores[i]+con;
    con=sum;
}
    
    printf("La suma de los valores es: %d\n", sum);

    return 0;
}
