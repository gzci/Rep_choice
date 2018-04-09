#include <stdio.h>
#include <stdlib.h>
int largest,element,a[101];
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int median(int a[],int left,int right)//����λ��
{
    return a[(left + right)/2];
}
void sqlit(int a[],int middle,int left,int right,int *ll,int *rr)//������λ����������˺����Ҷ�
{
    int i,j;
    i = j = (left + right) / 2;
    while(a[--i] == middle);//Ѱ���������λ����һ����ȵ�λ��
    *ll = i + 1;//�����i�Ѿ�������λ����������һ��
    while(a[++j] == middle);//Ѱ���Ҷ�����λ�����һ����ȵ�λ��
    *rr = j - 1;//�����j�Ѿ�������λ����������һ��
}
void mode(int left,int right)
{
    int ll,rr;
    int middle = median(a,left,right);//����λ��
    sqlit(a,middle,left,right,&ll,&rr);//�ָ�����
    if(largest < rr - ll + 1)//Ѱ���������
        {	
        
            largest = rr - ll + 1;
            element = middle;
        }
   
    if(ll - left > largest)//��ߵĸ���������λ���ĸ����������Ѱ��
        mode(left,ll - 1);
    if(right - rr > largest)//�ұߵĸ���������λ���ĸ������ұ���Ѱ��
        mode(rr + 1,right);
}
int main()
{
    int m,i;
   
    
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        qsort(a,m,sizeof(a[0]),cmp);
        mode(0,m-1);
        printf("%d %d\n",element,largest);
    
    return 0;
}
