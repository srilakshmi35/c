#include"../header/header.h"
void* arr_char1(int a[3][3]);
void main()
{
	int a[3][3];
	int i,j;
	int *p;
	p = &a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(p+i)+j);
//			scanf("%d",&a[i][j]);
//			p=&a[i][j];
			printf("address of each element:%p\n",p);
			p+1;
		}
	}
//	p=*(a+0);
/*	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%p\n ",(p+i+j));
			
		}
	}*/
//	p=*(a+0);

	p=*(a+0);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(p+i)+j);
		}
		
	printf("\n");
	}
	p=*(a+0);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%p\t",(p+i)+j);
		}
	}
}
