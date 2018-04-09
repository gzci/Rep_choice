#include<algorithm>
#include<iostream> 
#include<memory.h> 
using namespace std;

int Cut(int p[], int n,int r[])
{
	int q;
	if(r[n]>=0)
		return r[n];
	else if (n == 0)
        return 0;
    else{
    	q=-111111;
    	for (int i = 1; i <= n; ++i)
		    q = max(q, p[i-1] + Cut( p,n-i,r));
		r[n]=q;
		return q;
	}
	
}
int Memorized_cut_rod_aux(int p[], int n,int r[])
{
	int q;
    if(r[n]>=0)
    return r[n];//所需值已知
    if(n==0)
     q = 0;
    else
    {q = -10000000;
    for(int i = 1;i<=n;i++)
    q = max(q, p[i-1]+Memorized_cut_rod_aux(p,n-i,r));
    }
    r[n] = q;
    cout<<q;
    return q;
}
int main(){
	int price [10] ={1,5,8,9,10,17,17,20,24,30};
	int r [10];
	memset(r,-1,sizeof(r));
	
	int k=Memorized_cut_rod_aux(price,10,r);
	cout<<k;
}
