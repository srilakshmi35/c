#include<stdio.h>
#include<stdlib.h>
void merge(int* arr,int l,int mid,int h);
void merge_sort(int* arr,int l,int h);
int main(void)
{
	int *arr,n,i;
	printf("enter no.of values to be inserted:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	h=n-1;
	merge_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void merge_sort(int* arr,int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}
void merge(int* arr,int l,int mid,int h)
{
	int i,j,k;
	int n1=mid-l+1;
	int n2=h-mid;
	int left[n1],right[n2];
	for(i=0;i<n1;i++)
	{
		left[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		right[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1&&j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=right[j];
			j++;
			k++;
		}
	}
		while(i<n1)
		{
			arr[k]=left[i];
			i++;
			k++;
		}
	while(j<n2)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}
