#include<stdio.h>
void main()
{
	int a=10;
	char b='s';
	a=b;
	b=a;
	printf("%d\n%c\n",b,a);
}
