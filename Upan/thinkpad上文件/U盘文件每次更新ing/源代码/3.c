#include<stdio.h>
int a,b,c;

int main(){

printf("请输入3个数：");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
   if(b<c)
   {
     printf("最大的是:%d",c);
   }
   else{
   
   printf("最大的是:%d",b);
   
   }
}
else{
      if(a>c)
	  {
	    printf("最大的是:%d",a);
	  }


}



return 0;

}