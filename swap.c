#include<stdio.h>
void main()
{
	unsigned int a=0x87654321;
	unsigned int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
	r1=a<<16;
	
	r2=r1>>12;
	
	printf("%x\n",r2);	
	unsigned int res=r2>>16;
	unsigned int res1=res<<16;
	printf("%x\n",res1);
	r3=a>>16;
	r4=r3<<12;
	printf("%x\n",r4);
	unsigned int res2=r4<<16;
	unsigned int res3=res2>>16;
	printf("%x\n",res3);
	r5=res1|res3;
	printf("r5:%x\n",r5);
	r6=a>>20;
	r7=r6<<20;
	printf("%x\n",r7);
	r8=a<<20;
	r9=r8>>20;
	printf("%x\n",r9);
	r10=r5|r7|r9;
	printf("%x\n",r10);
}
