#include<stdio.h>
void main()
{
	char str[500],s[50];
	char *ptr,*ptr1;
	int count=0,length=0;;
	fgets(str,500,stdin);
	fgets(s,50,stdin);
	ptr1=s;
	for(ptr1=s;*ptr1!='\0';ptr1++)
	{
		length++;
	}
	ptr1=s;
	for(ptr=str;*ptr!='\0';ptr++)
	{
		if(*ptr==*ptr1)
		{
			ptr1++;
			count++;
			
		}
	}
	printf("%d",count);
}
