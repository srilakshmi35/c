#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr[50],n,i,temp,j,min;
	printf("enter number:\n");
	scanf("%d",&n);
	printf("enter array of elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
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
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
