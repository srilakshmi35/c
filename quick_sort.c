#include<stdio.h>
#include<stdlib.h>
int* quick_sort(int *arr,int l,int h);
int partition(int* arr,int l,int h);
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
//	h=n;
	quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
//	partition(arr,l,h);
}
int partition(int* arr,int start,int end)
{
	int pivot=arr[end];
	int i=(start-1);int temp;
	for(int j=start;j<=end-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[end];
	arr[end]=temp;
	return (i+1);
}
int* quick_sort(int *arr,int start,int end)
{
	int j;
	if(start<end)
	{
		j=partition(arr,start,end);
		quick_sort(arr,start,j);
		quick_sort(arr,j+1,end);
	}
}
