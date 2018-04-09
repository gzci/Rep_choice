#include<iostream>  
#include<algorithm>
using namespace std;
int dpB[500][500] = { 0 };
int lpsDp(char *str, int n)
{
	int dp[500][500] = { 0 }, tmp;
	
	for (int i = 0; i < n; ++i)  dp[i][i] = 1;

	for (int i = 1; i < n; ++i)
	{
		tmp = 0;

		for (int j = 0; j + i < n; j++)
		{

			if (str[j] == str[j + i]) {
				tmp = dp[j + 1][j + i - 1] + 2;
				dpB[j][j + i] = 1;
			}
			else {
				tmp = max(dp[j + 1][j + i], dp[j][j + i - 1]);
				if (dp[j + 1][j + i] > dp[j][j + i - 1])
					dpB[j][j + i] = 3;
				else
					dpB[j][j + i] = 2;
			}
				
			dp[j][j + i] = tmp;
		}
	}
	return dp[0][n - 1];
}
void printStr(char *str, int left, int right) {
	if (left == right) {
		cout << str[left];	
	}
	else if (left > right)
		return;
	else if (dpB[left][right] == 1) {
		cout << str[left];
		printStr(str, left + 1, right - 1);
		cout << str[right];
	}
	else if (dpB[left][right] == 2)
		printStr(str, left, right - 1);
	else if (dpB[left][right] == 3)
		printStr(str, left + 1, right);
}
int main()
{
	int x = 0;
	char str[500];
	char c = getchar();
	while ( c != '\n') {
		str[x++] = c;
		c = getchar();
	}
	
	cout << lpsDp(str,x) << ' ';
	printStr(str, 0, x-1);
	return 0;
}

