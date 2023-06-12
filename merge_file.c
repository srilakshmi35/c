#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp,*fp1;
	char ch[100];
	fp = fopen("abc.txt","r");
	fp1 = fopen("merge.txt","w");
	while(fgets(ch,100,fp) != NULL) {
		fprintf(fp1,"%s",ch);
	
	}
	fclose(fp);
	fp = fopen("append.txt","r");
	while(fgets(ch,100,fp) != NULL) {
		fprintf(fp1,"%s",ch);
	}
	fclose(fp);
	fclose(fp1);
}
