
#include<cstdio>  
#include<iostream>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    char a[10];//�������ַ����ַ���a  
    cin>>a;//�����ַ���  
    do{  
        puts(a);//��ÿһ�ֽⷨ�������  
    }while(next_permutation(a,a+strlen(a)));//��ȡ�ַ���a�ĳ��ȣ��Ӷ���������  
}  
