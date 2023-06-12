#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp=fopen("sample.txt",O_RDWR);
	printf("%d",fp);
	fclose(fp);
}
