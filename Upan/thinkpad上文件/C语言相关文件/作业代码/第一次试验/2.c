#include<stdio.h>
char a;
int main(){
printf("������һ���ַ���");

scanf("%c",&a);
if(a>=48&&a<=57)
{
printf("��������ǣ�����\n");

}
else {
      if((a>=65&&a<=90)||(a>=97&&a<=122))
	  {
	      printf("��������ǣ���д��ĸ��Сд��ĸ\n");
	  
	  }
      else{
	       
	       printf("��������ǣ������ַ�\n");
	  
	  }

}



return 0;

}