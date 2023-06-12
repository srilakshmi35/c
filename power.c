#include<stdio.h>
void main()
{
	unsigned int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a &(a-2))
	{
		printf("not a power");
	}
	else
	{
		printf("power");
	}
}
