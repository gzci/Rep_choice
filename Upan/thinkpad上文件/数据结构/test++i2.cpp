#include<stdio.h>
int main(){
	int i=0;
	int *p1 = &(++i); //ֻ����ֵ����ȡ��ַ 
	++i=5;//��ֵ�ǿ������ҵ��ڴ��ַ�ı���ֵ �����������ǵȺ���ߵ�ֵ��
	 
	
	
	printf("%d",i);
	return 0;
	
} 
