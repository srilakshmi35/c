#include"../header/header.h"
void main()
{
	int n,i;
	printf("eneter array size:");
	scanf("%d",&n);
//	scanf("enter col numbers:%d",&c);
	int *ptr;
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		ptr[i]=i;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
