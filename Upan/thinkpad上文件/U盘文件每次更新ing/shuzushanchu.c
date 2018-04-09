#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5};
	void chageary(int a[],int yaoshanchudeshu);
	chageary(a,3);
	

return 0;

}
void chageary(int a[],int yaoshanchudeshu)
{
		int k;

	    for(k=0;k<5-1;k++)
		{	
			a[yaoshanchudeshu]=a[yaoshanchudeshu+1];
			yaoshanchudeshu=yaoshanchudeshu+1;
		}
		for(k=0;k<5-1;k++)
		{
			printf("%d ",a[k]);

		}



}
