//Construir un diagrama de flujo para almacenar en un arreglo unidimensional los 100 primeros números pares. Imprimir al final el arreglo.
#include <stdio.h>

int main()
{
    int serie[100];
    int i;
    
    printf("Los números pares en los primeros 100 números son;\n");
    
for(i=1; i<100; i++)
{
    serie[i]=i;

    if(serie[i]%2==0)
    {
        printf("%d\n",serie[i]);
    }
}


    return 0;
}
