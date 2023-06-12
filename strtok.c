#include<stdio.h>
#include<stdlib.h>

#include<string.h>
void main()
{
	char *ptr,*temp;
	char delim;
	ptr=(char*)malloc(50*sizeof(char));
	fgets(ptr,50,stdin);
	temp=ptr;
	scanf("%c",&delim);
	for(int i=0;i<=strlen(ptr);i++)
	{
		if(*ptr==delim&&*ptr+1!='\0')
		{
			*ptr='\0';
			continue;
		}
		ptr++;
	}
	ptr=temp;
	for(int i=0;i<=strlen(ptr);i++)
	{
		if(*ptr=='\0')
		{	
			//*ptr++;
			//continue;
			break;
		}
		printf("%s",ptr);
		ptr++;
	}
}
