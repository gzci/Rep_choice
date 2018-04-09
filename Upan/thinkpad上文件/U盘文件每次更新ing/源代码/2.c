#include<stdio.h>
char a;
int main(){
printf("请输入一个字符：");

scanf("%c",&a);
if(a>=48&&a<=57)
{
printf("您输入的是：数字\n");

}
else {
      if((a>=65&&a<=90)||(a>=97&&a<=122))
	  {
	      printf("您输入的是：大写字母或小写字母\n");
	  
	  }
      else{
	       
	       printf("您输入的是：其他字符\n");
	  
	  }

}



return 0;

}