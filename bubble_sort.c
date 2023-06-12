#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int* arr,int n);
int main(void)
{
	int *arr,n,*t;
	printf("enter no.of elements to be inserted:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	t=arr;
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}

	bubble_sort(arr,n);
}
void bubble_sort(int* arr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)                //	for(j=i+1;j<n;j++)
										  // 		if(arr[i]>arr[i+1])
		{		
			if(arr[j]>arr[j+1])			//				"
			{							//				"
				temp=arr[j];			//				"
				arr[j]=arr[j+1];			//				"
				arr[j+1]=temp;			//				"
			//	i = -1;					//			i=-1;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(arr+i));
	}
}
