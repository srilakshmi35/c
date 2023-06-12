#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
int push1(int arr[],int,int);
int push2(int arr[],int,int);
int pop1(int arr[],int);
int pop2(int arr[],int);
int display1(int arr[],int);
int display2(int arr[],int);
int main(void)
{
	int arr[SIZE],top1 = -1,top2 = SIZE,choice;
	while(1) {
		printf("\n1.push1\n2.push2\n3.pop1\n4.pop2\n5.display1\n6.display2\n7.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				top1 = push1(arr,top1,top2);
				break;
			case 2:
				top2 = push2(arr,top1,top2);
				break;
			case 3:
				top1 = pop1(arr,top1);
				break;
			case 4:
				top2 = pop2(arr,top2);
				break;
			case 5:
				display1(arr,top1);
				break;
			case 6:
				display2(arr,top2);
				break;
			case 7:
				exit(EXIT_SUCCESS);
		}
	}
}
int push1(int arr[],int top1,int top2)
{
	if(top1 < top2 - 1) {
		top1++;
		int x;
		printf("enter data to insert");
		scanf("%d",&x);
		arr[top1] = x;
	}
	else {
			printf("stack1 overflow\n");
	}
	return top1;
}

int push2(int arr[],int top1,int top2)
{
	if(top1 < top2 - 1) {
		top2--;
		int x;
		printf("enter data to insert");
		scanf("%d",&x);
		arr[top2] = x;
	}
	else {
		printf("stack2 overflow\n");
	}
	return top2;
}
int pop1(int arr[],int top1)
{
	if(top1 >= 0) {
		top1--;
	}
	else {
		printf("stack1 underflow\n");
	}
	
	return top1;
}
int pop2(int arr[],int top2)
{
	if(top2 < SIZE) {
		top2++;
	}
	else {
		printf("stack2 underflow\n");
	}
	return top2;
}
int display1(int arr[],int top1)
{
	for(int i = top1;i >= 0;--i) {
		printf("%d\t",arr[i]);
	}
}
int display2(int arr[],int top2)
{
	for(int i = top2;i < SIZE;i++) {
		printf("%d\t",arr[i]);
	}
}
