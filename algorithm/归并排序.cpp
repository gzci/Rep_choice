#include<stdio.h>

#define MAXSIZE 10

//实现归并，并把数据都放在list1里面
void merging(int *list1,int list1_size,int *list2,int list2_size)
{
	int i,j,k,m;
	i = j = k = 0;
	
	int temp[MAXSIZE];
	
	while(i<list1_size&&j<list2_size)
	{
		if(list1[i] < list2[j])
		{
			temp[k++] = list1[i++];
		}
		else 
		{
			temp[k++] = list2[j++];
		}
	}
	//如果有剩下的，那么说明就是它是比前面的数组都大的，直接加入就可以了
	while(i<list1_size)
	{
		temp[k++] = list1[i++];
	}
	while(j<list2_size)
	{
		temp[k++] =  list2[j++];
	}
	
	for(m=0; m<(list1_size + list2_size);m++)
	{
		list1[m] = temp[m];
	}
}
void MergeSort(int k[],int n)
{
	
	if(n>1)
	{
		int *list1 = k;			//定义一个指针变量，指向数组k的地址
		int list1_size = n/2;	//数组的长度分为本来数组长度的一半
		int *list2 = k +n/2;	//定义另外一个指针变量，指向数组k+n/2的地址
		int list2_size = n - list1_size;//长度为刚才总的减去刚才分去那一半
		
		MergeSort(list1,list1_size);	//调用数组本身，相当与递归，
		MergeSort(list2,list2_size);	//调用数组本身，相当与递归
		merging(list1,list1_size,list2,list2_size);
	}
	
	
	
}

int main(){
	int i,a[10] = {5,2,6,0,3,9,1,7,4.8};
	
	MergeSort(a,10);
	
	printf("排序后的结果是:");
	for(i=1; i<10; i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n\n");
	
	return 0;
	
}

//归并排序复杂度分析：一趟归并需要将待排序列中的所有记录
//扫描一遍，因此耗费时间为O(n),而由完全二叉树的深度可知，
//整个归并排序需要惊醒[log2n],因此，总的时间复杂度为
//O(nlogn),而且这是归并排序算法中最好、最坏平均的时间性能
//空间复杂度：由于归并过程中需要与原始记录序列同样数量级的
//存储空间去存放归并结果及递归深度为log2N的栈空间，因此空间
//复杂度为O(n+logN)
//也就是说，归并排序是一种比较占内存，但却效率高且稳定的算法
