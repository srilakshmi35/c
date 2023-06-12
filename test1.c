#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str_rev(char *str,int len);
void main()
{
	char *str;
	str=(char*)malloc(50*sizeof(char));
	int i=0,len=0;
	printf("enter string:\n");
	fgets(str,50,stdin);
	len=strlen(str);
	str_rev(str,len);
}
void str_rev(char *str,int len)
{
	if(len!=0)
	{
		printf("%c",str[len]);
		len--;
		if(len==0)
		{
			printf("%c\n",str[len]);
		}
		str_rev(str,len);
	}
}
