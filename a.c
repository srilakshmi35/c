#include<stdio.h>
void main()
{
	char a[4][4]={"ab","bc","cd","de"},i,j;
	char *p[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			p[i][j]=&a[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\t");
		for(j=0;j<2;j++)
		{
			printf("%c",*p[i][j]);
		}
	}
}
