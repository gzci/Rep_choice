#include<bits/stdc++.h>
#include <stdio.h>
#include<iostream> 
#include<stdlib.h>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))
using namespace std;

const int MAXSTRLEN = 1000;

char a[MAXSTRLEN], b[MAXSTRLEN];
int dp[MAXSTRLEN][MAXSTRLEN], path[MAXSTRLEN][MAXSTRLEN];

///求序列x和y的LCS，path保存路径指向，以方便打印公共子序列
int Lcs(char x[], char y[])
{
	int i, j, len1 = strlen(x + 1), len2 = strlen(y + 1);
	memset(dp, 0, sizeof(dp));
	for (i = 1; i <= len1; ++i)
		for (j = 1; j <= len2; ++j)
		{
			if (x[i] == y[j])
				dp[i][j] = dp[i - 1][j - 1] + 1, path[i][j] = 1;
			else if (dp[i - 1][j] >= dp[i][j - 1])
				dp[i][j] = dp[i - 1][j], path[i][j] = 2;
			else
				dp[i][j] = dp[i][j - 1], path[i][j] = 3;
		}
	return dp[len1][len2];
}

///打印LCS
void PrintLcs(int i, int j)
{
	if (i == 0 || j == 0) return;
	if (path[i][j] == 1)
	{
		PrintLcs(i - 1, j - 1);
		putchar(a[i]);
	}
	else if (path[i][j] == 2) PrintLcs(i - 1, j);
	else PrintLcs(i, j - 1);
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
void  reverse(char * s)
{
	char *p=s;
	char temp;
	while(*p) p++;  //让p指向最后一个字符
	p--;
	while(s<=p)
	{
		SWAP(*s,*p,temp);   //交换两个字符，宏函数实现
		s++;
		p--;
	}
}
int main()
{
		gets(a+1);	 
		
		for(int i=0;i<strlen(a+1)+1;i++){
			b[i]=a[i];
		}
		reverse(b+1); 
		
		
		//测试reverse 
//		for(int i=0;i<strlen(a+1)+1;i++){
//			cout<<a[i];
//		}	
//		cout<<endl;
//		for(int i=0;i<strlen(a+1)+1;i++){
//			cout<<b[i];
//		}
		printf("%d ", Lcs(a, b));
		PrintLcs(strlen(a + 1), strlen(b + 1));
		putchar(10);
		//打印存储表 
		print(dp,strlen(a + 1),strlen(b + 1));
	
	
	
	return 0;
}

