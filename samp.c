#include<stdio.h>
void main()
{
	int a=10,*p;
	p=&a;
	printf("%p\t %d\n",p,*p);
	printf("%p\t %d\n",p+1,*(p+1));
//	++*p;
//	printf("%p\n",p);
//	printf("%d\n",(*p)++);
//	printf("%d\n",*p);
//	printf("%p\n",p);
//	printf("%p\n",p);
}
/*void increment(int a)
{
	a=a+1;
	printf("%d\n",a);
}*/
