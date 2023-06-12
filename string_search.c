#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char str[50][50],s[20];
    int n,i,j,flag = 0;
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
        while(j<n)
        {
            if(s[j]==str[i][j])
            {
                j++;
                if(s[j]=='\0'&&str[i][j]=='\0')
                {
                   // printf("string found\n");
					flag = 1;
//                   	exit(1); 
					break;
                }
//				if(flag == 1) {
//					break;
//				}
            }
            else{
                i++;
            }
			if(flag == 1) {
				break;
			}
        }
		if(flag == 1) {
			break;
		}
    }
	if(flag == 1) {
		printf("string is found");
	} else {
		printf("string is not found");
	}
}
