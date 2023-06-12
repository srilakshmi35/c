#include<stdio.h>
#include<stdlib.h>
int main(void) {

	unsigned int x , x1;	
	int p, n,c = 0;
	printf("enter number to invert:\n");
	scanf("%d",&x);
	printf("enter position:\n");
	scanf("%d",&p);
	printf("enter n bits to invert:\n");
	scanf("%d",&n);
	int i = p;

	while(i != 0) {
		c++;	
		x1 = 1 << i;
		x = x ^ x1;
		i--;
		if(c == n)
		{
			break;
		}
	}
	printf("%d",x);
}
