#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int len,len1,i,j,count=0;
	scanf("%[^\n]s",str);
	printf("enter str1:\n");
	scanf("%[^\n]s",str1);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;i<len-len1;i++)
	{
		for(j=0;j<len;j++)
		{
			if(str[i+j]!=str1[j])
				break;
		}
		if(j==len)
		{
			count+1;
		}
	}
	printf("%d\n",count);
}
