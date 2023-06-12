#include<stdio.h>
int a[100];
void main()
{
//	int n=1,
	int i;
	int a[5];
//	extern int a;
	int c=0;
	{
	extern int a[100];
	for(i=0;i<10;i++) {
		printf("Enter the %dth element of the array\n", i);
		scanf("%d",&a[i]);
		c++;
	printf("count is:%d\n",c);
//		c=c+1;
	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	printf("count is:%d\n",c);
	}
}
