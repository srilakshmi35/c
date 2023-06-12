#include<stdio.h>
void main()
{
	char str[100];
	char *ptr;
	int length=0,i;
	scanf("%[^\n]s",str);
	for(ptr=str;*ptr!='\0';ptr++)
	{
		length++;
	}
	printf("%d\n",length);
	i=length;
	while(i<=length)
	{
		ptr=&str[i];
		ptr++;
		printf("%c",*ptr);
		i--;
		if(ptr==&str[0])
		{
			break;
		}
	}
}
