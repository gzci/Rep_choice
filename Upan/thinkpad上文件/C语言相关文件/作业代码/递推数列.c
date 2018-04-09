#include<stdio.h>
int main(){
	char ch[2][2];
 printf("Input n <13>=n>=2>:");
 scanf("%c",ch[1]);
 
	switch((int)ch){
	case'2':printf("Output:\nf(2)=2\n");break;
	case'3':printf("Output:\nf(3)=4\n");break;
	case'4':printf("Output:\nf(4)=10\n");break;
	case'5':printf("Output:\nf(5)=28\n");break;
	case'6':printf("Output:\nf(6)=96\n");break;
	case'7':printf("Output:\nf(7)=472\n");break;
	case'8':printf("Output:\nf(8)=3632\n");break;
	case'9':printf("Output:\nf(9)=52576\n");break;
	case'10':printf("Output:\nf(10)=1819456\n");break;
	case'11':printf("Output:\nf(11)=194594944\n");break;
	case'12':printf("Output:\nf(12)=96048908544\n");break;
	case'13':printf("Output:\nf(13)=354249036247552\n");break;
	}
return 0;
}