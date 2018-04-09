#include<stdio.h>

int main()
{
int x,i=3;
int a[20];
printf("input a data(3--20):");
scanf("%d",&x);
printf("Output:\n");
a[0]=0;
a[1]=1;
a[2]=2;
for(i=3;i<=x;i++)
{
a[i]=2a[i-1]+a[i-2]+a[i-3];
}



printf("%d",a[x]);






printf("\n");


return 0;
}
