#include<stdio.h>
#include<stdlib.h>
void selection_sort(int* arr,int n);
int main(void)
{
	int *arr,n;
	printf("enter no.of elements to be inserted:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void selection_sort(int* arr,int n)
{
	int min,i,j,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
			if(min!=i)
			{
				temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
		
	}
}
