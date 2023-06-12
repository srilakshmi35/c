#include<stdio.h>
//static int a=10;
static void add()
{
	static int a=10;
	printf("%d",a);
}
void sub()
{
	add();
//	printf("%d",a);
}
