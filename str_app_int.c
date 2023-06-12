#include<stdio.h>
#include<stdlib.h>
char *strnappend(char *dest, const char *src,int n);
void main()
{
	char *src,*dest;
	int n;
	src=(char*)malloc(50*sizeof(char));
	dest=(char*)malloc(50*sizeof(char));
	printf("enter string src:\n");
	fgets(src,50,stdin);
	printf("enetr string2 dest:\n");
	fgets(dest,50,stdin);
	printf("enter n value:\n");
	scanf("%d",&n);
	strnappend(dest,src,n);
	printf("%s\n",dest);
}
char *strnappend(char *dest, const char *src,int n)
{
	while(*dest!='\0')
	{
		dest++;
		if(*dest=='\n')
		{
			*dest='\0';
		}
	}
	for(int i=0;i<n;i++)
	{
		*dest=*src;
		dest++;
		src++;
		if(i==n)
		{
			*dest='\0';
		}
	}
}
