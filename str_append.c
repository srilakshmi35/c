#include<stdio.h>
char *strappend(char *dest, const char *src);
void main()
{
	char dest[100],src[100];
//	scanf("%[^\n]s",src);
	fgets(src,50,stdin);

	scanf("%[^\n]s",dest);
	strappend(dest,src);
	printf("%s",dest);
}
char *strappend(char *dest, const char *src)
{
	while(*dest!='\0')
	{
		dest++;
	}
	while(*src!='\0')
	{
		*dest=*src;
		if(*src=='\n')
		{
			break;
		}
		 src++;
		dest++;
	}
//		if(*src=='\0')
//		{	
			*dest='\0';
//		}
	
}
