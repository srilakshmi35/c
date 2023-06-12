#include<stdio.h>
#include<stdlib.h>
int linear_search(int* ptr,int key,int n);
int main(void)
{
	int *ptr,key,n;
	printf("enter no.of elements to be inserted:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("malloc is not working:\n");
		exit(-1);
	}
	printf("enter no array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}

	printf("enter element to be searched:\n");
	scanf("%d",&key);
	linear_search(ptr,key,n);
}
int linear_search(int* ptr,int key,int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(ptr[i]==key)
		{
			flag=1;break;
		}
	}
	if(flag==1)
	{
		
		printf("element found at:%d\n",i);
	}
	else
	{
		printf("element not found\n");
	}
}
