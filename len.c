#include<stdio.h>
int main()
{
	char s[20];
	int length=0;
	printf("enter string:");
	scanf("%[^\n]s", s);
    while(s[length] != '\0') {
       length;
   }
  printf("%d", length);

  return 0;
}

