#include<stdio.h>
int main()
{
	int a;
	char s='a';
	scanf("%c\n",s);
	if(a>='A' && a<='Z')
	{
         printf("%d\n",(a+'a'-'A'));
	}
	else
	{
		printf("%d\n",a);
	}

}
