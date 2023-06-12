#include<stdio.h>
int main(void)
{
	int arr[3][3],i,j,row,col;
/*	printf("enter row:\n");
	scanf("%d",&row);
	printf("enter col:\n");
	scanf("%d",&col);
	arr[row][col];*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(int k=(j+1);k<3;k++)
			{
				if(arr[i][j]>arr[i][k])
				{
					int temp=arr[i][j];
					arr[i][j]=arr[i][k];
					arr[i][k]=temp;
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
}
