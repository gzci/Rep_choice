#include<stdio.h>
int main(){
	int n,i;
	int m=0,f=1,x=0;

	printf("交换的天数：");
	scanf("%d",&n);
	printf("Output:\n");
	for(i=0;i<n;i++)
	{
		m=m+100000;
	
	}
	for(i=1;i<n;i++)
	{
		f=f*2;
		x=f+x;

	}
	printf("陌生人交出的钱数:%ld\n",x/100);
	printf("富翁交出的钱数:%ld\n",m);



return 0;
}