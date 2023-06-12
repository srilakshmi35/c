#include<stdio.h>
void local();
//static int a=10;
void main()
{
	 static int a=10;
	printf("%d",a);
	local();
}

//void local(){
//	printf("%d",a);
//}
