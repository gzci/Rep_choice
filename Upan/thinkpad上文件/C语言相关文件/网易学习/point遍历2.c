#include<stdio.h>
int main() {
	int i;
	int a[] = { 1, 2, 3, 3, 4, 5, 6, 7, -1 }; //这个-1是利用指正判断是不是到了末尾
	int *p;
	p = a;

//	for( i=0;i<3;i++)
//	{
//	
//		scanf("%d ",p++);
//	}
//	p=a;
//		for( i=0;i<3;i++)
//	{
//	
//		printf("%d ",*p++);
//	}
	while (*p != -1) {
		printf("%d\n", *p++);
	}

	return 0;

}