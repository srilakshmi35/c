#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

int push(int stack[],int);
int pop(int stack[],int);
void display(int stack[],int);

int main(void)
{
	int stack[SIZE];
	int top = SIZE,choice;
	while(1) {
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:\n");

		scanf("%d",&choice);

		switch(choice) {
			case 1:
				printf("%d",top);
				top = push(stack,top);
				break;
			case 2:
				top = pop(stack,top);
				break;
			case 3:
				display(stack,top);
				break;
			case 4:
				exit(0);
		}
	}
}
int push(int stack[],int top)
{
	if(top == 0) {
		printf("stack is full\n");
	}
	else {
		int x;
		printf("enter element to insert:\n");
		scanf("%d",&x);
		stack[top] =  x;
		printf("stack:%d\n",stack[top]);
		top--;
	}
	return top;
}

int pop(int stack[],int top)
{
	if(top == SIZE + 1) {
		printf("stack underflow\n");
	}
	else {
		top++;
	}
	return top;
}
void display(int stack[],int top)
{
	if(top == -1) {
		printf("stack is empty\n");
	}
	else {
		for(int i = SIZE;i>top;i--) {
			printf("%d\t",stack[i]);
		}
	}
}
