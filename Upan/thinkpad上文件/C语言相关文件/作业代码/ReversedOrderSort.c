#include<stdio.h>
#define len 5
int main(){
	int i,a[len],t;
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len/2;i++)
	{
		t=a[i];
		a[i]=a[len-i-1];
		a[len-1-i]=t;
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
return 0;
}