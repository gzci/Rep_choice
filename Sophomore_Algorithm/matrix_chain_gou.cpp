


#include<iostream>
using namespace std;

int m[100][100], s[100][100];
void minMul(int *p,int n) {
	for (int i = 1; i <= n; i++) {
		m[i][i] = 0;
	}
	for (int l = 2; l <= n; l++) {
		for (int i = 1; i <= n - l + 1; i++) {
			int j = i + l - 1;
			m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];
			s[i][j] = i;
			for (int k = i + 1; k < j; k++) {
				int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (t < m[i][j]) {
					m[i][j] = t;
					s[i][j] = k;
				}
			} 
		}
	}
}

void printRoad(int i, int j) {
	if (i == j)
		cout << 'A' << i;
	else {
		cout << '(';
		printRoad(i, s[i][j]);
		printRoad(s[i][j] + 1, j);
		cout << ')';
	}
}
int main()
{
	int p[100];
	
	int n = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> p[i];
	}
	minMul(p,n);
	cout << m[1][n];
	printRoad(1, n);
    return 0;
}


