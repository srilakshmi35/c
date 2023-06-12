#include<stdio.h>
int main(void)
{
	FILE *fp;
	char ch;
	int count=0,count1=0,count2=0;
	fp=fopen("sample1.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch=='\0')
		{
			count1++;
		}
		if(ch=='\n')
		{
			count2++;
		}
		count++;
	ch=fgetc(fp);
	}
	printf("no_of characters:%d\n",count);
	printf("no_of words:%d\n",count1);
	printf("no_of lines:%d\n",count2);
	fclose(fp);
}
