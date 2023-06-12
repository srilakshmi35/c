#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp,*fp1;
	fp = fopen("append.txt","r");
	fp = fopen("abc.txt","w");
	char ch;
	ch = fgetc(fp);
	while(ch != EOF) {
		ch = ch + 100;
		fputc(ch,fp1);
		ch = fgetc(fp);
	}
	fclose(fp);
	fclose(fp1);
}
