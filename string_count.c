#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50][50],s[50];
    int i=0,j=0,c=0,n;
  //  printf("enter no.of strings:\n");
  //  scanf("%d",&n);
    printf("enter sentance:\n");
        scanf("%[^\n]s",str[i]);     
    printf("enter searching string:\n");
    scanf("%[^\n]s",s);
    while(i<strlen(str))
    {
        while(j<strlen(s))
        {
            if(s[j]==str[i][j])
            {
                j++;
                if(s[i]=='\0'&&str[i][j]!='\0')
                {
                    printf("substring found\n");
                    c++;
                }
                if(s[j]=='\0'&&str[i][j]=='\0')
                {
                    printf("string found at:%d",i);
                    j=0;
                    c++;
                }
            }
            else{
                i++;
                if(i==n)
                {
                    printf("string not found\n");
                }

            }
        }
    }
}
