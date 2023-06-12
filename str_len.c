#include"../header/header.h"
#include<string.h>
void str_len();
void main()
{
	char str[50],s[50];
	int i=0,count=0,c=0;
	char *ptr,*ptr1;
	printf("enter string for fgets:\n");
	fgets(s,50,stdin);
	printf("enetr string for scnf:\n");
//	ptr1=&s[0];
	str_len(str,s);

}


	for(ptr1=&s[0];*ptr1!='\n';ptr1++)
	{
		if(*ptr1=='\0')
		{
			break;
		}
		c++;
	}
	printf("length of the string is:%d\n",c);
	
	printf("enter string 1 for scanf:\n");

	scanf("%[^\n]s",str);

	for(ptr=&str[0];*ptr!='\0';ptr++)
	{
		count++;
	}
	printf("length of the string for sacnf:\n");

	printf("%d\n",count);


}
