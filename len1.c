#include<stdio.h>
void main()
{
	char str[50],s[30];
	char *ptr,*ptr1;
	printf("enetr string 1:\n");
	fgets(str,50,stdin);
	printf("enetr string2:\n");
	scanf("%[^\n]s",s);
	ptr=str;
	ptr1=s;
	for(ptr=&str[0];*ptr!='\0';)
	{
		ptr++;
		if(*ptr=='\n')
		{
			break;
		}
		printf("%p\n",ptr);
	}
	printf("%p\n",ptr);
	for(ptr1=s;*ptr1!='\0';ptr1++)
	{
		printf("%p\n",ptr);
		*ptr=*ptr1;
		ptr++;
	}
	*ptr='\0';

	printf("%s",str);
	
}
