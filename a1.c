#include<stdio.h>
void main()
{
	int a[3][3];
	int *p;
	int i,j;
	p=&a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enetr value at:a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
//		p=&a[i][j];
//		p+1;
//		printf("%p\n",p);
//		p+1;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%p\n",&a[i][j]);
		}
	}
//	p=a[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",*p);
		printf("using pointer %p\t",p);
		p++;	
		}
	printf("\n");
	}
/*	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",*p);
			p++;
			
		}
	}
	p=a[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		}
	}
}*/
	p=&a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*p);
			p++;
		}
	}
}
