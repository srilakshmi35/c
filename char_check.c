#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int i = 0x1234567;
	char n = (char)i;
	printf("%x\t",n);
//	n = (char)i;
	i = i >> 8;
	n = (char)i;
//	printf("%x\n",i);
	printf("%x\t",n);
	i = i >> 8;
	n = (char)i;
	printf("%x\t",n);
	i = i >> 8;
	n = (char)i;
	printf("%x\n",n);	
}
