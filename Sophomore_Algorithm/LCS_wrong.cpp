#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
const int MAXSTRLEN = 1000;
using namespace std;

char a[MAXSTRLEN], b[MAXSTRLEN];
int dp[MAXSTRLEN][MAXSTRLEN];
char *reverse(char *s)
{
    int l, i;
    char t;
    l = strlen(s);
    for(i = 0; i <= l/2; i ++)
    {
        t = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = t;
    }
     
    return s;
}


void print(int C[][MAXSTRLEN],int n,int m){
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				cout<<C[i][j]<<" ";
			}
			cout<<endl; 
		}
} 

//这第二步直接递归得出最后 数字 
//int Cvi(int i,int j){
//	if(i==0||j==0)
//		return 0;
//	else if(c1[i]==c2[j])
//		return Cvi(i-1,j-1)+1;
//		else return max(Cvi(i,j-1),Cvi(i-1,j));
//}

int Lcs(char x[], char y[])
{
	int i, j, len1 = strlen(x + 1), len2 = strlen(y + 1);
	memset(dp, 0, sizeof(dp));
	for (i = 1; i <= len1; ++i)
		for (j = 1; j <= len2; ++j)
		{
			if (x[i] == y[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else if (dp[i - 1][j] >= dp[i][j - 1])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i][j - 1];
		}
	return dp[len1][len2];
}
///打印LCS
void PrintLcs(int i, int j)
{
	if(i==0||j==0) return ;
	if(a[i]==b[j]){
		
		cout<<a[i];
		PrintLcs(i-1,j-1); 
	}
	else if(dp[i - 1][j] >= dp[i][j - 1]){
		PrintLcs(i-1,j);
	}else PrintLcs(i,j-1);
}
int main()
{

			scanf("%s",a+1);
			
		
			for(int i=0;i<strlen(a+1);i++){
				b[i]=a[i];
			}
				reverse(b+1);
			printf("%d ", Lcs(a, b)); 
			PrintLcs(strlen(a + 1), strlen(b + 1));
//		print(dp,strlen(a + 1),strlen(b + 1));
	
	
	return 0;
}
