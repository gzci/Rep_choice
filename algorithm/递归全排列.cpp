#include<iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include<stdio.h>
using namespace std;
template <class T>
inline void Swap(T& a, T& b)
{
    // ����a��b
    T temp = a; a = b; b = temp;
}

template<class T>
void Perm(T list[], int k, int m)
{
    //����list [k��m ]���������з�ʽ
    int i;
    if (k == m)
    {
         //���һ�����з�ʽ
         for (i = 0; i <= m; i++)
             cout << list [i];
         cout << endl;
    }
    else // list[k��m ]�ж�����з�ʽ
    {
         // �ݹ�ز�����Щ���з�ʽ
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
