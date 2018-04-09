#include<stdio.h>
int main()
{
float n,sum=0,t=1;
for(n=1;n<=20;n++)
{
t=t*n;
sum=sum+t;
}
printf("sum=%.0f\n",sum);

return 0;
}
