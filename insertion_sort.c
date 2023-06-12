#include<stdio.h>
#include<stdlib.h>
void insertion(int *arr,int n);
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
    insertion(arr,n);
    for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void insertion(int *arr,int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
