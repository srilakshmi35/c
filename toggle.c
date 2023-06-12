#include<stdio.h>
void main()
{
	unsigned int a,b,c;
	printf("enter a value:\n");
	scanf("%d",&a);
	b=a;
	unsigned int count=0,res=0;
	while(a>0)
	{
		if(count%2==0)
		{
			res=res|(1<<count);
		}
	count++;
	a=a/2;
	}
	c=b^res;
	printf("%d\n",c);
}
