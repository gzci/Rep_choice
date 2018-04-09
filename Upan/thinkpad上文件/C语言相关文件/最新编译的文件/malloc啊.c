#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	void *a;
	int i=0;
	;//malloc ·µ»ØµÄÊÇ void*
	while((a=malloc(100*1024*1024)))
	{
		i++;
	}
	free(a);

printf("%d00MB",i);
	return 0;
}

