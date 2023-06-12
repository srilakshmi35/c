#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","w");
	fputs(fp,"srilakshmi");
	fprintf(fp,"sri");
	fclose(fp);
}
