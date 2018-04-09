#include<iostream>  
#include<algorithm>
using namespace std;
float mfloatime(float l, float *p, float c,float vt1,float vt2,float T,float n) 
{
	int x = c, k = 1;
	float t = 0;
	float time1=0, time2=0;
	int j = n+1;
	float time[10] = { 0 };
	p[0] = 0, p[j] = l;
	for (int i = 1; i <= j; i++) 
	{
		if (c <= p[i] - p[i - 1]) 
		{
			
				time1 = min((T + c / vt1 + (p[i] - p[i - 1] - c) / vt2), (x / vt1 + (p[i] - p[i - 1] - x) / vt2)) + time[i - 1];
				x = 0;
				time[k++] = time1;
		}
		else if (c > p[i] - p[i - 1]) 
		{
				if (p[i] - p[i - 1] > x) {
					t = x / vt1 + (p[i] - p[i - 1] - x) / vt2;
					x = 0;
				}
				else if (p[i] - p[i - 1] < x) {
					t = (p[i] - p[i - 1]) / vt1;
					x = x - (p[i] - p[i - 1]);
				}
				
				time2 = min((T + (p[i] - p[i - 1]) / vt1), t) + time[i];
				time[k++] = time2;
				if ((T + (p[i] - p[i - 1]) / vt1) > t)
					x = x;
				else
					x = c - (p[i] - p[i - 1]);
		}
		
	}
	return time[k-1];
}

int main()
{
	float l = 0, n = 0, c = 0, t = 0;
	float vr = 0, vt1 = 0,vt2 = 0;
	float p[20];
	float time1= 0, time2 = 0;
	cin >> l;
	cin >> n>>c>>t;
	cin >> vr >> vt1 >> vt2;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	
	
	time1 = l / vr;
	time2 = mfloatime(l,p,c,vt1,vt2,t,n);
	if (time1 < time2)
		cout << "Good job,rabbit!";
	else
		cout << "What a pity rabbit!";
    return 0;
}


