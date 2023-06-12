#include<stdio.h>
void main()
{
	unsigned int a,count=0,res=0,b,c;
	printf("enter a number:\n");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		if(count%2==1)
		{
			res=res|(1<<count);
		}
		count++;
		a=a/2;
	}
	c=b ^ res;
	printf("%d\n",c);

}

