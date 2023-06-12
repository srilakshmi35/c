#include"../header/header.h"
#include<string.h>
void main()
{
//	printf("enter string length:\n");
//	int n;
//	scanf("%d",&n);
	char str[100];
	int i=0,count=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		count=count+1;
	}
	printf("%s\n",str);
	printf("count=%d\n",count);
}
