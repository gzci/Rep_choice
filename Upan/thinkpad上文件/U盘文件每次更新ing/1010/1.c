#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,t=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	printf("please input a:%d\n",a);
    if(a>b){
	t=t+b;
	}
	 if(a>c){
	t=t+c;
	}
     if(a>d){
	t=t+d;
	}
	 if(a>e){
	t=t+e;
	}
	   if(a>f){
	t=t+f;
	}
     printf("%d",b,"%d",c,"%d",d,"%d",e,"%d",f);
	 printf("output:%d\n",t);


return 0;

}