#include <stdio.h>
#include<stdlib.h>
char *str;
void strrev(char *str);
void main() {
//    char *str; 
//    scanf("%[^\n]s",*str);
	str=(char*)malloc(50*sizeof(char));

	printf("enter string:\n");
	fgets(str,50,stdin);
   
	printf("before reversing:%s\n",str);
	 strrev(str);
   printf("%s\n",str); 

}
void strrev(char *str)
{
    int temp;
    int len;
   // temp=str;
    while(*str!='\0')
    {
        len++;
        if(*str=='\n')
        {
            str='\0';
        }
    }
	printf("%d\n",len);
    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
     //   len--;
    }
    
}
