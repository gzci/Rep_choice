#include<algorithm>
#include<iostream> 
#include<memory.h> 
using namespace std;

int Cut(int p[], int n)
{
	int r[10];
    memset(r,0,sizeof(r));
    for(int j=1;j<=n;j++){
    	int tmp = -1;
	for (int i = 1; i <= j; ++i)
	{
        
		    tmp = max(tmp, p[i-1] + Cut( p,j-i));
		    r[j]=tmp;
	}
	}
	
	return r[n];
}
int main(){
	int price [10] ={1,5,8,9,10,17,17,20,24,30};
	int s [10]={0};
	cout<<Cut(price,10);
}
