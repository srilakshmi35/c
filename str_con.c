#include"../header/header.h"
void main()
{
	char str[50],s[50];
	int i=0,j=0;
	char *ptr1,*ptr2;
	printf("enter string1:\n");
	scanf("%[^\n]s",str);
	printf("enter string2:\n");
	scanf("%s",s);
//	fgets(s,50,stdin);
//	ptr1=str;
	for(ptr1=str;*ptr1!='\0';)
	{
		ptr1++;
		
	}
	for(ptr2=s;*ptr2!='\0';ptr2++)
	{
		*ptr1=*ptr2;
		if(*ptr2==32)
		{
			continue;	
		}
		ptr1++;
	}
	printf("%s",str);


}


/*	void str_conciat();
	for(ptr1=&str[0];*ptr1!='\0';ptr1++)
	{
		ptr2=(char*)ptr1;
	//	printf("%c",*ptr2);
		ptr2++;
	}

	ptr2++;  
	for(ptr1=&s[0];*ptr1!='\0';ptr1++)
	{
		ptr2=(char*)ptr1;
		printf("%c",*ptr1);
	
		if(*ptr1=='\0')
		{
			ptr2='\0';
			printf("hello");
		}
		ptr2++;
	}
	printf("%d",ptr2);
	for(ptr2=&string[0];*ptr2!='\0';ptr2++)
	{
		printf("%c",*ptr2);
	}*/
	
























/*	while(str[i]!='\0')
	{
		//if(str[i]!='\0')
	//	{
			string[j]=str[i];
			j++;
	}
	for(i=0;s[i]!='\0';i++)
//	while(s[i]!='\0')
	{
		string[j]=s[i];
		j++;
	}
	printf("%s\n",string);
	//	}
		else
			string[i]=s[i];
	}
	printf("%s\n",string);
*/	
//}
