#include <iostream>
using namespace std;
    int max1=0;
    int current=0;
    int currentnum=0;
    int which;
    //写了一个N*N 复杂的算法。 
int main(void)
{

    int num[100000];
    int n;
        scanf("%d", &n);
      
        for (int a = 0; a < n; a++) {
            scanf("%d", &num[a]);
            
        }
      
       for(int i=0;i<=n;i++){
       	current=num[i];
       		for(int j=0;j<n;j++){
       				
       				if(num[j]==current){
       					currentnum++;
					   }
			   }
			   
			   if(currentnum>max1){
			   		max1=currentnum;
			   		which=current;
			   		
			   }
			   currentnum=0;
			   
	   }
	   cout<<which<<endl<<max1;

}

