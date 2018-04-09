#include<stdio.h>

#define MAXSIZE 10

//ʵ�ֹ鲢���������ݶ�����list1����
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
	//�����ʣ�µģ���ô˵���������Ǳ�ǰ������鶼��ģ�ֱ�Ӽ���Ϳ�����
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
		int *list1 = k;			//����һ��ָ�������ָ������k�ĵ�ַ
		int list1_size = n/2;	//����ĳ��ȷ�Ϊ�������鳤�ȵ�һ��
		int *list2 = k +n/2;	//��������һ��ָ�������ָ������k+n/2�ĵ�ַ
		int list2_size = n - list1_size;//����Ϊ�ղ��ܵļ�ȥ�ղŷ�ȥ��һ��
		
		MergeSort(list1,list1_size);	//�������鱾���൱��ݹ飬
		MergeSort(list2,list2_size);	//�������鱾���൱��ݹ�
		merging(list1,list1_size,list2,list2_size);
	}
	
	
	
}

int main(){
	int i,a[10] = {5,2,6,0,3,9,1,7,4.8};
	
	MergeSort(a,10);
	
	printf("�����Ľ����:");
	for(i=1; i<10; i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n\n");
	
	return 0;
	
}

//�鲢�����Ӷȷ�����һ�˹鲢��Ҫ�����������е����м�¼
//ɨ��һ�飬��˺ķ�ʱ��ΪO(n),������ȫ����������ȿ�֪��
//�����鲢������Ҫ����[log2n],��ˣ��ܵ�ʱ�临�Ӷ�Ϊ
//O(nlogn),�������ǹ鲢�����㷨����á��ƽ����ʱ������
//�ռ临�Ӷȣ����ڹ鲢��������Ҫ��ԭʼ��¼����ͬ����������
//�洢�ռ�ȥ��Ź鲢������ݹ����Ϊlog2N��ջ�ռ䣬��˿ռ�
//���Ӷ�ΪO(n+logN)
//Ҳ����˵���鲢������һ�ֱȽ�ռ�ڴ棬��ȴЧ�ʸ����ȶ����㷨
