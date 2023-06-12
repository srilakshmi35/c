#include"../header/header.h"
void* arr_fun(int []);
int main(void)
{
	int a[5]={1,2,3,4,5};
	int i,*p[5];
//	p=a;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		printf("address of each element %p\n",p[i]);
		printf("%d\n",a[i]);
	}
	printf("Address of a=%p\n",p);
	arr_fun(a);
}
void* arr_fun(int arr[])
{
	printf("passing array as arguement\n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
