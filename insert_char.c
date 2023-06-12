#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char *str,c,*temp,s,c1;
	int pos;
	
	str = (char*)malloc(50*sizeof(char));
	temp = str;
	printf("enter string:");
	fgets(str,50,stdin);

	printf("enter character:");
	scanf("%c",&s);
	printf("enter pos:\n");
	scanf("%d",&pos);
	
	for(int i = 1;i <= strlen(str);i++) {
		if(i == pos) {
			c = *str;
			*str = s;
			str++;
			c1 = *str;
			*str = c;
			str++;
			while(c1 != '\0') {
				c = *str;
				*str = c1;
				str++;
				c1 = c;
				
				
				if(c1 == '\n') {
					break;
				} 
		}

	}
		else {
			str++;
		}
	}
	*str = '\0';
//	str = temp; 
	printf("%s\n",temp);
}
