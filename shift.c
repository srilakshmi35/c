#include<stdio.h>
void main()
{
	unsigned int a=0x87654321;
	unsigned int res,res1,res2,res3,res4,res5,res6,res7,res8;
	res=a>>24;
	res1=a<<24;
	res2=res|res1;
	printf("%x\n",res2);
	res3=a<<8;
	res4=res3>>8;
	printf("%x\n",res4);
	res5=a>>8;
	res6=res5<<8;
	res7=res4&res6;
	printf("%x\n",res7);
	res8=res2|res7;
	printf("%x\n",res8);	
}
