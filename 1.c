#include <stdio.h>

int main()
{
int a;
int b;
int sum;
int res;
int mul;

printf("ingresar dos números, se obtendra su suma, resta y su multiplicación \n");
printf("número 1\n");
scanf("%u",&a);
printf("número 2\n");
scanf("%u",&b);

sum=a+b;
res=a-b;
mul=a*b;

printf("la suma es;%d\n",sum);
printf("la resta es;%d\n",res);
printf("la multiplicación es;%d\n",mul);
    return 0;
}
