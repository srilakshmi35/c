#include<stdio.h>
#include<stdlib.h>
int push(int stack[],int);
int pop(int stack[],int);
int display(int stack[],int);
#define SIZE 5
int main(void)
{

	int stack[SIZE],top=-1;		
	int choice;
	while(1){
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: top=push(stack,top);break;
			case 2: top=pop(stack,top);break;
			case 3:display(stack,top);break;
			case 4:exit(1);
		}
	}
}
int push(int stack[],int top)
{
	int x;
	if(top==SIZE-1)
	{
		printf("overflow\n");
	}
	else{
		printf("enter element to be insert:\n");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
	return top;
}
int pop(int stack[],int top)
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else{
		printf("deleted element:%d\n",stack[top]);
		top=top-1;
	}
	return top;
}
int display(int stack[],int top)
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\t",stack[i]);
	}
}

