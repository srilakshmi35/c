#include<stdio.h>
#include<stdlib.h>
int partition(int *arr,int low,int high);
int quickSort(int *arr,int l,int h);
int main(void)
{
	int *arr,n,i; 
    printf("enter no.of elements:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
//    printf("Before sorting array elements are - \n");  
//    printArr(arr, n);  
    quickSort(arr, 0, n - 1);  
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int quickSort(int *arr,int l,int h)
{
	int j;
	if(l<h)
	{
		j=partition(arr,l,h);
		quickSort(arr,l,j-1);
		quickSort(arr,j,h);
	}
}
int partition(int *arr,int low,int high)
{
	int pivot=arr[high];
	int i=low,j=high,temp;
	while(i<j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[j];//arr[high]=arr[j];
	arr[j]=pivot;//arr[j]=pivot;
	pivot=temp;
	return j;
}
