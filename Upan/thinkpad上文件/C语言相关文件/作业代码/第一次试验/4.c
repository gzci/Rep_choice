#include<stdio.h>
char a,b,c,d,e=0;

int main(){
	
	printf("������һ��������5λ������");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    if(e=='\n'){
	printf("�����������λ���ǣ�4\n");
	}
	else{
	printf("�����������λ���ǣ�5\n");
	}
	printf("�������һ�����ǣ�%c\n",a);
	printf("������Ķ������ǣ�%c\n",b);
	printf("��������������ǣ�%c\n",c);
	printf("��������ĸ����ǣ�%c\n",d);
	if(e=='\n')
	{
	printf("�������������ǣ�û��\n");
	}
	else{
	
	printf("�������������ǣ�%c\n",e);
	}
    printf("�������ǣ�%c%c%c%c%c\n",e,d,c,b,a);

 




return 0;

}