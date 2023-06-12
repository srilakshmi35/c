#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp=fopen("sample.txt","r");
	char ch;
	int count=0;
	ch=fgetc(fp);
	if(ch==' '||ch=='\n')
	{
		count++;
		ch=fgetc(fp);
	}
	printf("%d",count);
	fclose(fp);
}
