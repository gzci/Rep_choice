
#include<cstdio>  
#include<iostream>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    char a[10];//定义存放字符的字符串a  
    cin>>a;//读入字符串  
    do{  
        puts(a);//把每一种解法都输出来  
    }while(next_permutation(a,a+strlen(a)));//获取字符串a的长度，从而进行排序  
}  
