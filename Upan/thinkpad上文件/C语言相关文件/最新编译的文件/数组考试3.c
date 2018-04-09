#include<stdio.h>
int main()
{	
int a[10];
int count=0,i;
printf("Input 10 integers.\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Output:\n");


for(i=0;i<10;i++)
{
	if(a[i]%2!=0 && i%2!=0)
	{
		count++;
	}
}
printf("count=%d\n",count);
for(i=0;i<10;i++)
{
	if(a[i]%2!=0 && i%2!=0)
	{
		printf("a[%d]=%d\n",i,a[i]);
	
	}
}
return 0;

}