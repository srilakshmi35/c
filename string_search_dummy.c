#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char str[50][50],s[20];
    int n,i,j,flag=0;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter strings:\n");
    for(i=0;i<n;i++)
    {
            scanf("%s",str[i]);
    }
    printf("enter string to search:\n");
    scanf("%s",s);
    i=0,j=0;
    while(i<n)
    {
        while(j<strlen(s))
        {
            if(s[j]==str[i][j])
            {
                j++;
                if(s[j]=='\0'&&str[i][j]=='\0')
                {
                    printf("string found at:%d\n",i);
                    exit(0);
                }
				if(s[j]=='\0'&&str[i][j]!='\0')
				{
					printf("substring found\n");
					exit(0);
				}
            }
            else{
                i++;
                j=0;
                if(i==n)
                {
                    printf("string not found\n");
                     exit(0);
                    
                }
            }
        }
    }
}
