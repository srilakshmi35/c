#include<stdio.h>
void main()
{
	int a=0,b=1,c;
	printf("%d\t%d\t",a,b);
	int i;
	while(i<=10)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		i++;
	}
}
