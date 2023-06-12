#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div1(int,int);
int mod(int,int);
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	char ch;
	ch=getchar();
	printf("%d",ch);
	if(ch>=48&&ch<=57)
	{
 		int res;
		printf("1.+\n 2.-\n3.*\n4./\n5.mod");
		printf("make your choice");
		int cons;
		scanf("%d",&cons);
		switch(cons)
		{
			case 1: res=add(a,b);printf("%d\n",res);break;
			case 2:res=sub(a,b);printf("%d\n",res);break;
			case 3:res=mul(a,b);printf("%d\n",res);break;
			case 4:res=div1(a,b);printf("%d\n",res);break;
			case 5:res=mod(a,b);printf("%d\n",res);break;
			default:printf("not applicable");
		}
	}
	else
	{
		printf("enter integers only");
	}
}
