#include<stdio.h>
#include<stdlib.h>
//int i;
int* read_ar(int ar[]);
int* print_ar(int ar[]);
void main()
{
	int array[10],*p;
	//int a[10];
	p=read_ar(array);
	printf("%p\n",&array);
	print_ar(p);
}
int*  read_ar(int array[])
{

	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("%p\n",&array);
	return array;
}
int* print_ar(int array[])
{
	int i;
	printf("%p\n",&array);
	for(i=0;i<10;i++)
	{
		printf("%d\t",array[i]);
	}
	return array;
}
