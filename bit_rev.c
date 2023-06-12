#include <stdio.h>

int main()
{
    unsigned int a=0x87654321;
    unsigned int c,d,e,f,g,h,i,j;
 	register int b=a>>20;h=b<<20;
    c=a<<21;
	d=c>>21;
	printf("d=%x\n",d);
    e=a<<12;
	f=e>>12;//printf("%x\n",f);
	g=a>>10;
	i=g<<10;
	j=f&i;
	j=j>>8;
	printf("j=%x\n",j);
	h=h>>20;
	printf("h=%x\n",h);
    
	unsigned int count=0;
	while(j>0)
	{
		count++;
		j=j/2;
	}
	printf("count=%d\n",count);

}
