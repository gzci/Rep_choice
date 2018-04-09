#include<stdio.h>
int main(){
	int i=0;
	int *p1 = &(++i); //只有左值才能取地址 
	++i=5;//左值是可以用找到内存地址的变量值 单纯的理解就是等号左边的值；
	 
	
	
	printf("%d",i);
	return 0;
	
} 
