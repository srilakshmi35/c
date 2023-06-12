#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	int c = 0;
	char ch[100];
	fp = fopen("abc.txt","r");
	while(fgets(ch,100,fp)  != NULL) {
		c++;
	}
	printf("%d\n",c);
	fclose(fp);
}
