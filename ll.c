#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*new_node,*temp,*temp1;
struct node  insert_at_end(struct node *head);
int insert_at_beginning(struct node *temp);
int creation();
int display(struct node *head);
int main()
{
	int ch;
	head=NULL;
	while(1){
		printf("\n1.creation\n2.insert_at_end\n3.insert_at_beginning\n4.display\n5.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&ch);
		switch(ch){
		case 1:
			creation();
			break;
		case 2:
			*temp=insert_at_end(head);
			break;
		case 3:
			insert_at_beginning(temp);
			break;
		case 4:
			display(head);
			break;	
		case 5: 
			exit(0);
		}
	}
}
int creation(){

	head=NULL;
	while(){
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("enter data:\n");
		scanf("%d",&(new_node->data));
		new_node->next=NULL;
		if(head==NULL){
		
			head=new_node;
			temp=new_node;
		}
		else{
	
			temp->next=new_node;
			temp = temp->next;
		}
		printf("do you want continue:(y/n)\n");
		scanf("%d",&n);
		choice=n;
	}
}      


struct node insert_at_end(struct node *head){
		temp = head;
		
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("enter data:\n");
		scanf("%d",&(new_node->data));
		new_node->next=NULL;
		if(head==NULL)
		{
			head=new_node;
			temp=new_node;
			return *head;
		} 
/*		else{
			temp->next=new_node;
			temp=temp->next;
		} */
		while(temp-> next != NULL) {
			temp = temp->next;
		}
		temp -> next = new_node;
	return *head;
}
int insert_at_beginning(struct node *temp){

	new_node=(struct node*)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&(new_node->data));
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
		temp=new_node->next;
	}
		else{
			temp1=head;
			head=new_node;
			new_node->next=temp1;
		}
}
int display(struct node *head){
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}

