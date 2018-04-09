#include<stdio.h>
int main()
{
int a[100],i,n,t,j=0;


scanf("%d",&n);


for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");

scanf("%d",&t);


for(i=0;i<n;i++)
{
if(a[i]>t)
j++;
}


printf("%d",j);









return 0;
}