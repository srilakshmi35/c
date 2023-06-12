#include<stdio.h>
int main(void)
{
	FILE *fp;
	char val[50];
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("file type invalid");	
	}
	printf("enter a char");
	scanf("%s",val);
	fprintf(fp,"%s",val);
	fclose(fp);
	return 0;
}
