#include<stdio.h>
char a,b,c,d,e=0;

int main(){
	
	printf("请请入一个不多于5位的数：");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    if(e=='\n'){
	printf("您输入的数的位数是：4\n");
	}
	else{
	printf("您输入的数的位数是：5\n");
	}
	printf("您输入的一个数是：%c\n",a);
	printf("您输入的二个数是：%c\n",b);
	printf("您输入的三个数是：%c\n",c);
	printf("您输入的四个数是：%c\n",d);
	if(e=='\n')
	{
	printf("您输入的五个数是：没有\n");
	}
	else{
	
	printf("您输入的五个数是：%c\n",e);
	}
    printf("逆序数是：%c%c%c%c%c\n",e,d,c,b,a);

 




return 0;

}