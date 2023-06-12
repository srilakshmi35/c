#include<stdio.h>
#include<stdlib.h>
int strpalin(char *str);
void main()
{
	char *str;
	int res;
	str=(char*)malloc(50*sizeof(char));
	fgets(str,50,stdin);
	res=strpalin(str);
	printf("%d\n",res);
}
int strpalin(char *str)
{
	char *rev;
	int len;
	rev=str;
	while(*rev!='\0')
	{
		rev++;
		len++;
		if(*rev=='\n')
		{
			*rev='\0';
		}
	}
//	rev--;
	int i=0;
	while(i>=len-1)
	{
		if(str[i]==rev[len])
		{
			//rev--;
		 	i++;len--;
		}
		else
			break;
	}
	if(str>rev)
	{
		return 1;
	}
	else
		return 0;
}
