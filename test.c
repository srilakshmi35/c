#include<stdio.h>
char *strcopy(char *dest,const char* src);
void main()
{
	char src[100],dest[100];
	scanf("%[^\n]s",src);
	strcopy(dest,src);
	printf("%s\n",dest);
}
char* strcopy(char *dest,const char *src)
{

	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
		if(*src=='\0')
		{
			*dest='\0';
		}
	}
}

