#include<stdio.h>
void main()
{
	char str[50],s[50];
	char *ptr1,*ptr2;
	int temp=-1;
	printf("enter string1:\n");
	scanf("%[^\n]s",str);
	printf("enter string2:\n");
	scanf("%s",s);
	ptr1=str;
	ptr2=s;
	while(*ptr1!='\0'&&*ptr2!='\0')
	{
		if(*ptr1==*ptr2)
		{
			temp=0;
			ptr1++;
			ptr2++;
		//	printf("strings are equal");
		}
		else
		{
			temp=-1;
			break;
		}
	}
	if(temp==0)
	{
		printf("strings are equal\n");
	}
	else
	{
		printf("strings are not equal\n");
	}
	
}
