#include<stdio.h>
int main(){
	float sum=0,x,fz=2,fm=1;
	int n,i,j;

printf("Input:\nPlease input n:");
scanf("%d",&n);


	for(j=1;j<=n;j++)
	{	sum=sum+fz/fm;
		x=fz;
		fz=fz+fm;
		fm=x;
	//	y=(i+j)  / x  ;
	//	x=y;
	//	sum=sum+y;
	}





printf("Output:\nsum is %9.6f\n",sum);
return 0;
}