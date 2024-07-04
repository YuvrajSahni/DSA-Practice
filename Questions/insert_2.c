#include<stdio.h>
#include<stdlib.h>

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

void InsertAtBeg(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for the new node to be inserted: ");
	scanf("%d", &newnode->data);
	if(head==0){
		head=newnode;
	}
	
	else{
		newnode->next = head;
		head = newnode;
	}
}

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n!=0){
		createNode();
		n--;
	}
	display();
	InsertAtBeg();
	display();	
}