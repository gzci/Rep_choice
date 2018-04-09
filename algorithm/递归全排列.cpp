#include<iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include<stdio.h>
using namespace std;
template <class T>
inline void Swap(T& a, T& b)
{
    // 交换a和b
    T temp = a; a = b; b = temp;
}

template<class T>
void Perm(T list[], int k, int m)
{
    //生成list [k：m ]的所有排列方式
    int i;
    if (k == m)
    {
         //输出一个排列方式
         for (i = 0; i <= m; i++)
             cout << list [i];
         cout << endl;
    }
    else // list[k：m ]有多个排列方式
    {
         // 递归地产生这些排列方式
         for (i=k; i <= m; i++)
         {
             Swap (list[k], list[i]);
             Perm (list, k+1, m);
             Swap (list [k], list [i]);
         }
    } 
}
int main(){
	char s[]="abc";
	Perm(s,0,2);
}
