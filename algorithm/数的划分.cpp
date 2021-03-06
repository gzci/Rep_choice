

#include<iostream>
using namespace std;

int fun(int n,int m)
{
	if(n == 1 || m == 1)return 1;
	
	else if(n < m)return fun(n,n);
	
	else if(n == m)return 1 + fun(n, m - 1);
	
	else if(n > m)return fun(n-m,m)+fun(n,m-1);
	
}

int main()
{
	cout<<fun(7,7);
	return 0;
}
//根据n和m的关系，考虑以下几种情况： 
//       （1）当 n = 1 时，不论m的值为多少（m > 0 )，只有一种划分即 { 1 };
//        (2)  当 m = 1 时，不论n的值为多少，只有一种划分即 n 个 1，{ 1, 1, 1, ..., 1 };
//        (3)  当 n = m 时，根据划分中是否包含 n，可以分为两种情况：
//              (a). 划分中包含n的情况，只有一个即 { n }；
//              (b). 划分中不包含n的情况，这时划分中最大的数字也一定比 n 小，即 n 的所有 ( n - 1 ) 划分。
//              因此 f(n, n) = 1 + f(n, n-1);
//        (4) 当 n < m 时，由于划分中不可能出现负数，因此就相当于 f(n, n);
//        (5) 但 n > m 时，根据划分中是否包含最大值 m，可以分为两种情况：
//               (a). 划分中包含 m 的情况，即 { m, { x1, x2, ..., xi } }, 其中 { x1, x2, ..., xi } 的和为 n - m，可能再次出现 m，因此是（n - m）的 m 划分，因此这种划分
//                     个数为 f(n-m, m);
//               (b). 划分中不包含 m 的情况，则划分中所有值都比 m 小，即 n 的 ( m - 1 ) 划分，个数为 f(n, m - 1);
//              因此 f(n, m) = f(n - m, m) + f(n, m - 1);
// 
//         综合以上情况，我们可以看出，上面的结论具有递归定义特征，其中（1）和（2）属于回归条件，（3）和（4）属于特殊情况，将会转换为情况（5）。而情况（5）为通用情况，属于递推的方法，其本质主要是通过减小m以达到回归条件，从而解决问题。其递推表达式如下：
//         f(n, m) =      1;                                        ( n = 1 or m = 1 )
//                            f(n, n);                                 ( n < m )
//                            1+ f(n, m - 1);                      ( n = m )
//                            f(n - m, m) + f(n, m - 1);       ( n > m )
