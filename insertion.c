#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int* arr,int n);
int main(void)
{
	int *arr,n,i;
	printf("enter no.of elements to be inserted:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)	
	{
		printf("%d\t",arr[i]);
	}
}
void insertion_sort(int* arr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i=i-1;
			}
		}
	}
}
