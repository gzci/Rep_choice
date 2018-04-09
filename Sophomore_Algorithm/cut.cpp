#include<iostream>
using namespace std;
int cut_rod(int *p, int n) {
	int r[1000];
	r[0] = 0;
	for (int j = 1; j <= n; j++) {
		int q = -100000000;
		for (int i = 1; i <= j; i++) {
			if (q > p[i] + r[j - i])
				q = q;
			else
				q = p[i] + r[j - i];
			r[j] = q;
		}
	}
	return r[n];
}

int main()
{
	int n = 0, t = 0,x = 0;
	int p[1000] = { 0 };
	cin >> n >> t;
	for (int i = 1; i <= t; i++) {
		cin >> x;
		cin >> p[x];
	}
		
	int max=cut_rod(p, n);
	cout << max << endl;
    return 0;
}


