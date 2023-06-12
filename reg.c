#include<stdio.h>
//register int b=10;
void main()
{
	register int a=10;
	a++;
	printf("%d\n",a);
}
