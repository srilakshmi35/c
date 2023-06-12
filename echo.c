#include<stdio.h>
#include<stdlib.h>
int main(void){

	char *str,*s;
	char s1[] = "echo";
	s = s1;

	str = (char*)malloc(50 * sizeof(char));
	fgets(str,50,stdin);
	while (*s != '\0') {

		if (*str == *s) {

			str++;
			s++;
		}
		else {
		
			printf("enter valid echo command\n");
			exit(0);
		}
	}

//	printf("%s\n",str);
	while (*str != '\0') {

		if(*str == 34) {
			
			str++;
			continue;
		}
		else {

			printf("%c",*str);
			str++;

		
		}
	}
	
}
