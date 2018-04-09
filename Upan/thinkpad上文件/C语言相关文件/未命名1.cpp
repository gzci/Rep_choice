#include<stdio.h>
void printn(int n){
	if(n){
		printn(n-1);
		printf("%d\n",n);
		
	}
}
int main(){
	printn(99999);
	
	
	return 0;
	
} 


