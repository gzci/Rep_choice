#include<stdio.h>
int a,b,c;

int main(){

printf("������3������");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
   if(b<c)
   {
     printf("������:%d",c);
   }
   else{
   
   printf("������:%d",b);
   
   }
}
else{
      if(a>c)
	  {
	    printf("������:%d",a);
	  }


}



return 0;

}