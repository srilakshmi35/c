#include<stdio.h>
#include<stdlib.h>
int strspan(char *s1,char *s2);
void main()
{
	char *s1,*s2;
	int res;
	s1=(char*)malloc(50*sizeof(char));
	s2=(char*)malloc(50*sizeof(char));
	printf("enetr string:\n");
	fgets(s1,50,stdin);
	printf("enetr string2:\n");
	fgets(s2,50,stdin);
	
	res=strspan(s1,s2);
	printf("count is:%d\n",res);
}
int strspan(char *s1,char *s2)
{
	char *temp;
	int count=0;
	temp=s2;
	while(*s1!='\0')
	{
		if(*s1==*s2)
		{
			count++;
			s1++;
			s2=temp;
		}
		else if(*s2!='\0')
		{
			s2++;
		}
		else
			break;
	}
	return count;
}
