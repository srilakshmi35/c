#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	ptr = (int *)malloc(5*sizeof(int));
	int *temp;
	temp=ptr;
	printf("enter integers:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&*(ptr+i));
//		&*(ptr+i);
	}
//	ptr=temp;
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
