#include<stdio.h>
#include<string.h>
int main(void)
{
	int i = 0x1234567,j;
	char *n;
	printf("%ld\n",sizeof(i));
	n = (char*)&i;
	printf("n = %x\n",*n); 
	for(int j = 0;j<sizeof(i);j++) {
		printf("%x\t",n[j]);
	}
}
