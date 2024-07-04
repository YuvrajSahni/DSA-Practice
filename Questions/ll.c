#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
}*head, *temp, *newnode , *tail;

void create(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data);
	newnode->next=0;
	newnode->prev=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		newnode->prev=temp;
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
	printf("Enter data to insert at the beginning: ");
	scanf("%d", &newnode->data);
	if(head==0){
		head=tail=newnode;
	}
	else{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
}

void InsertAtEnd(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert at the end: ");
	scanf("%d", &newnode->data);
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=NULL;
	}
}

void DeleteAtBeg(){
	if(head==0){
		printf("Empty List");
	}
	else{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}

void DeleteAtEnd(){
	if(head==0){
		printf("List is empty");
	}
	else{
        temp=head;
		while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        temp->prev=NULL;
        free(temp);
	}
}
int main(){
	int n;
	printf("Enter number of nodes: ");
	scanf("%d", &n);
	while(n!=0){
		create();
		n--;
	}
	display();
	InsertAtBeg();
	display();
	InsertAtEnd();
	display();
	printf("\n");
	DeleteAtBeg();
	display();
	printf("\n");
	DeleteAtEnd();
	display();
}