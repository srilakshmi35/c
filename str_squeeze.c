#include<stdio.h>
#include<stdlib.h>
char *strsqueeze(char *str);
void main()
{
	char *str;
	str=(char*)malloc(50*sizeof(char));
	fgets(str,50,stdin);
	strsqueeze(str);
}
char *strsqueeze(char *str)
{
	char *temp;
	temp=str;
	temp++;
	while(*str!='\0')
	{
	if(*str==*temp)
	{
		str++;
		temp++;
	//	continue;
	}
	else{
		printf("%c",*str);
		str++;
		temp++;
	}
	}
}
