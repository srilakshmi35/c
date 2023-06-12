#include<stdio.h>
#include<stdlib.h>
void binary_search(int *arr,int k,int n);
int main(void)
{
	int *arr,k,n,i;
	printf("enter no.of elements to be inserted:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("malloc is not working:\n");
		exit(-1);
	}
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("enter element to be searched:\n");
	scanf("%d",&k);
	binary_search(arr,k,n);
}
void binary_search(int *arr,int k,int n)
{
	int i,mid,start=0,end=n-1,flag=0;
	for(i=0;i<n;i++)	
	{
		mid=(start+end)/2;
		if(arr[mid]==k)
		{
			flag=1;
			printf("element found at:%d\n",mid);break;
		}
		else if(arr[mid]<k)
		{
			start=mid+1;
		}
		else if(arr[mid]>k)
		{
			end=mid-1;
			
		}
	}
	if(flag==0)
	{
		printf("element not found\n");
	}
}
