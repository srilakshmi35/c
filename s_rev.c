#include<stdio.h>
#include<stdlib.h>
char *strrev(char *str);
void main()
{
	char *str;
	str=(char*)malloc(50*sizeof(char));
	fgets(str,50,stdin);
	strrev(str);
}
char *strrev(char *str)
{
	char *temp;
	temp=str;
	while(*str!='\0')
	{
		str++;
	}
	str--;
	while(str!=temp)
	{
		printf("%c",*str);
		str--;
/*		if(*str==*temp)
		{
			printf("%c",*str);
		}*/
	}
	printf("%c",*str);
}
