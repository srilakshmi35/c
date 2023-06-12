#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	char **str;
	int i,n;
	printf("enter n value:\n");

	scanf("%d",&n);

	str = (char**)malloc(n*sizeof(char*));

	printf("enter strings:\n");

	for(i = 0;i < n;i++) {

		str[i] = (char*)malloc(10*sizeof(char));
//		fgets(str[i],10,stdin);

		scanf("%s",str[i]);
	}


	for(i = 0;i < n;i++) {

		printf("%s\n",str[i]);	
	}

	while(i < n) {

		while(j < strlen(str[i])) {

			
		}
	}

}
