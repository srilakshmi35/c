#include<stdio.h>
#include<stdlib.h>
int enqueue(int queue[],int*,int*);
int dequeue(int queue[],int*,int*);
int display(int queue[],int*,int*);
#define SIZE 5
int main()
{
    int queue[SIZE],*front,*rear;
    int choice,f=-1,r=-1;
    front=&f,rear=&r;
    while(1)
    {
        printf("\n1.enque\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:*rear=enqueue(queue,front,rear);break;
            case 2:*front=dequeue(queue,front,rear);break;
            case 3:display(queue,front,rear);break;
            case 4:exit(1);
        }
    }
}
int enqueue(int queue[],int *front,int *rear)
{
    int x;
    if((*front==*rear+1)||(*front==0)&&(*rear==SIZE-1))
    {
        printf("overflow\n");
    }
    else{
        if(*front==-1)
        {
            *front=0;
        }
        printf("enter element to insert:\n");
        scanf("%d",&x);
        *rear=*rear+1;
        queue[*rear]=x;
    }
    return *rear;
}
int dequeue(int queue[],int *front,int *rear)
{
    if(*front==-1)
    {
        printf("underflow\n");
    }
    else{
        
     if(*front==*rear)
    {
        *front=-1;
        *rear=-1;
    }
    else{
        *front=*front+1;
    }
    }
    return *front;
}
int display(int queue[],int *front,int *rear)
{
    if(*front==-1)
    {
        printf("underflow\n");
    }
    else{
        for(int i=*front;i<=*rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    return 0;
}
