/*
 * test.c
 *
 *  Created on: 2016-11-3
 *      Author: Administrator
 */


#include<stdio.h>
int main(int argc, char **argv) {//char **a == char*a[]
	int n;
	char a[][22]=
	{ {"jan"},//0
	{"feb"},
	{"mar"},
	{"apr"},
	{"may"},
	{"june"},
	{"july"},
	{"august"},
	{"sep"},
	{"oct"},
	{"nov"},
	{"dec"},
	};
	scanf("%d",&n);
	printf("%s",a[n-1]);
	





return 0;

}

