#include<stdio.h>
#include<stdlib.h>
char *s1,*s2;
int strspan(const char*,const char*);
void main()
{
//	char *s1,*s2;
	int res;
	s1=(char*)malloc(50*sizeof(char));
	s2=(char*)malloc(50*sizeof(char));
	printf("enter string1:\n");
	fgets(s1,50,stdin);
	printf("enter string 2:\n");
	fgets(s2,50,stdin);
	res=strspan(s1,s2);
	printf("%d\n",res);
}
int strspan(const char *s1,const char *s2)
{
	int count=0;
	const char *temp;
	temp=s2;
	while(*s1!='\0')
	{

		if(*s1==*s2)
		{
			printf("in if condition*s1:%c\n",*s1);
			printf("in if condition *s2:%c\n",*s2);
			count++;
			printf("count is :%d\n",count);
			s1++;
			s2=temp;
	
		}
		
		else if(*s2!='\0')
		{
			s2++;
		}
		else
			break;
		if(*s1=='\n')
		{
			s1='\0';
			s2='\0';break;
		}
	}
	return count;
}
