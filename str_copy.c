#include<stdio.h>
void main()
{
	char str[50],s[50];
	char *ptr1,*ptr2;
	scanf("%s",str);
	ptr2=s;
	for(ptr1=str;*ptr1!='\0';)
	{
		*ptr2=*ptr1;
		ptr2++; 
		ptr1++;
		if(*ptr1=='\0')
		{
			*ptr2='\0';
		}
	}
	printf("%s",s);
}




















void main()
{
	char str[50];
	char *ptr1,*ptr2;
	scanf("%s",str);
	str_copy(str);
}
void str_copy(char *str)
{
	char s[50];
	char *ptr2;
	ptr2=s;
	for(ptr2=s;*ptr2!='\0';)
	{
		*ptr2=*str;
		ptr2++;
		str++;
		if(*str=='\0')
		{
			*ptr2='\0';
		}
	}
	printf("%s",s);
}
