#include<stdio.h>
int main(void)
{
	int arr[50],n,i,temp;
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	while(i<n)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			printf("temp=%d\t,arr[%d]=%d\t,arr[%d+1]=%d\n ",temp,i,arr[i],i,arr[i+1]);
			if(i>0){
				i=i-1;
			}
		}
		else
		{
			i++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
