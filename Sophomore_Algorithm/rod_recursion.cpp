#include<algorithm>
#include<iostream> 
using namespace std;

int Cut(int p[], int n)
{
    if (n == 0)
        return 0;
	int tmp = -1;
	for (int i = 1; i <= n; ++i)
	{
        
		    tmp = max(tmp, p[i-1] + Cut( p,n-i));
	}
	return tmp;
}
int main(){
	int price [10] ={1,5,8,9,10,17,17,20,24,30};
	int s [10]={0};
	cout<<Cut(price,10);
}
