#include<stdio.h>
char *strncopy(char *dest, const char *src, int n);
void main()
{
	char src[100],dest[100];
	int n;
	fgets(src,50,stdin);

	scanf("%d",&n);
	strncopy(dest,src,n);
	printf("%s\n",dest);
}
char *strncopy(char *dest, const char *src, int n)
{
	for(int i=0;i<n;i++)
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
