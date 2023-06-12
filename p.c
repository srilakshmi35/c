#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *cstr="GLOBAL";
char *str;
char *dstr;
void main()
{
//	char *str,*dstr;

//	printf("%p\n",str);
	str=malloc(10);
//	str="EDGE";
//	printf("%c\n",*str);
//	printf("%d\n",str[6]);
//	printf("%p\n",str+6);
	dstr=malloc(10);
//	strcpy(dstr,"SOFTWARE");
	dstr="software";
	str=dstr;
	//cstr=dstr;
	printf("%p\n",str);
	printf("%c\n",*str);  //here it gives first element as S
//	free(str);
//	free(dstr);
}
