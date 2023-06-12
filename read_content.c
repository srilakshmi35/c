#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	int val;
	fp=fopen("sample1.txt","r");
	if(fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fscanf(fp,"%d",&val);
	printf("number is:%d\n",val);
	fclose(fp);
}
