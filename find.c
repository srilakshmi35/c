#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#define size 50
int main ( void )
{
	char main_str [size];
	char sub_str [ size ];
	char *cptr = NULL;
	char *iptr = NULL;
	int count = 0;
	int flag  = 0;
	int store;
	printf ("Enter the main string:\n");
	fgets ( main_str, size, stdin);
	printf ("Enter the sub string:\n");
	__fpurge ( stdin );
	cptr = main_str;
	cptr = cptr + strlen ( cptr );
	*cptr == '\0';
	scanf ("%s", sub_str);
	cptr = main_str;
	iptr = sub_str;
	store  = strlen ( sub_str );
	while ( *cptr != '\0' ) {
		count = 0;
		iptr = sub_str;
		if ( *cptr == *iptr ) {
			while ( *iptr != '\0' ) {
				if ( *cptr == *iptr ) {
					count++;
					cptr++;
					iptr++;
				} else {
					count = 0;
					iptr = sub_str;
				}
			}
			if ( count == store ) {
				flag ++;
			}
		}	
		cptr++;
	}
	printf("%d times \" %s \" is present in \" %s \" ", flag, sub_str, main_str ); 
	return 0;
}	
