#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *ptr,*temp;
	int i;
	for(i=0;i<4;i++)
	{
		ptr=(char*)malloc(50*sizeof(char));
	}
	temp=ptr[0];
	for(i=0;i<4;i++)
	{
		fgets((ptr+i),50,stdin);
		printf("%p\n",*(ptr+i));
		printf("%s\n",&*(ptr+i));
		ptr=temp;
	}
/*	for(i=0;i<4;i++)
	{
		(ptr+i)=(temp+i);
	}*/
//	ptr=temp;
	for(i=0;i<4;i++)
	{	
		printf("%s\n",&*(ptr+i));
	}
}
