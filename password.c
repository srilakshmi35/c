nclude <stdio.h>
#include<stdlib.h>
int main() {
   char *str,*temp;
   int len=0;
   str=(char)malloc(50*sizeof(char));
   fgets(str,50,stdin);
   temp=str;
   while(*str!='\0')
   {
       len++;
       str++;
       if(*str=='\n')
       {
           *str='\0';
       }
   }
   str=temp;
   while(*str!='\0')
   {
       if(len>=8)
       {
           if(*str<='A' && *str>="Z")
            {
                str++;
            }
         if(*str<='a' && *str>='z')
           {
               str++;
           }
            else if((int)*str>=48 && (int)*str<=57)
            {
                str++;
            }
             else if((int)*str>=32 && (int)*str<=47)
            {
                str++;
            }    
        }
        else
            printf("enter atleast 8 characters");
   }
}
