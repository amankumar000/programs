#include<stdio.h>
int main()
{
int a,b;
printf("value of a before swapping \n");
scanf("%d",&a);

printf("value of b before swapping \n");
scanf("%d",&b);


a = a^b;
b = a^b;
a = a^b;

printf("value of a=%d\nb=%d after swapping", a,b);

return 0;
}
