#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
}*head, *temp, *newnode;

void createNode(){
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode -> data);
	newnode->next = NULL;
	
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next = newnode;
		temp=newnode;
	}	
}

void display(){
	temp=head;
	while(temp!=0){
		printf("%d ", temp->data);
		temp=temp->next;
	}
}

int main(){
	int choice,n=1;
	while(n!=0){
		printf("Enter choice: ");
		scanf("%d",&choice);
		if(choice==1)
		{
			createNode();
		}
		else
		{
			printf("EXIT\n");
			n=0;
		}
	}
	
	display();
	
	
}