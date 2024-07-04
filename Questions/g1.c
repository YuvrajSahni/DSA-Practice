#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct student
{
	char stud_name[60];
	char reg_num[10];
	int mark1;
	int mark2;
	int mark3;
	int total;
	float average;
	char grade;
	struct student *link;
	struct student *LL;
};
struct student *head=NULL;
struct student *newnode;
struct student *temp;
int del_count=0;
void info()
{
	struct student *temp2=head->link;
	while(temp2!=NULL)
	{
	printf("\nname: %s",temp2->stud_name); 
	printf("\nregister number: %s",temp2->reg_num); 
	printf("\nmark1: %d",temp2->mark1); 
	printf("\nmark2: %d",temp2->mark2); 
	printf("\nmark3: %d",temp2->mark3); 
	printf("\naverage: %f",temp2->average);
	printf("\ngrade: %c",temp2->grade);
	printf("\n-----------------------------------");
	temp2=temp2->link;
	}
}
void insertion(struct student* stu)
{

	stu=(struct student*)malloc(sizeof(struct student));
	if(head==NULL)
	{
		head=stu;
	}
	else
	{
		printf("\nEnter name: "); scanf("%s",stu->stud_name);
		printf("Enter register number: "); scanf("%s",stu->reg_num);
		
		printf("Enter mark1: "); scanf("%d",&stu->mark1);
		printf("Enter mark2: "); scanf("%d",&stu->mark2);
		printf("Enter mark3: "); scanf("%d",&stu->mark3);
		
		stu->average=(stu->mark1+stu->mark2+stu->mark3)/3;
		if(stu->average>91)
		{
			stu->grade='S';
		}
		else if(stu->average>81 && stu->average<=90)
		{
			stu->grade='A';
		}
		else if(stu->average>71 && stu->average<=80)
		{
			stu->grade='B';
		}
		else if(stu->average>61 && stu->average<=70)
		{
			stu->grade='C';
		}
		else if(stu->average>51 && stu->average<=60)
		{
			stu->grade='D';
		}
		else if(stu->average>41 && stu->average<=50)
		{
			stu->grade='E';
		}
		else if(stu->average>0 && stu->average<=40)
		{
			stu->grade='F';
		}
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=stu;
	
	}
}

void reverse()
{
	struct student* temp3= head;
	temp3->LL=NULL;
	while(temp3->link!=NULL){
	temp3->link->LL= temp3;
	temp3=temp3->link;
	}
	printf("\n Reverse order of the linked list:  ");
	while(temp3->LL!=NULL)
	{
	printf("\nname: %s",temp3->stud_name); 
	printf("\nregister number: %s",temp3->reg_num); 
	printf("\nmark1: %d",temp3->mark1); 
	printf("\nmark2: %d",temp3->mark2); 
	printf("\nmark3: %d",temp3->mark3); 
	printf("\naverage: %f",temp3->average);
	printf("\ngrade: %c",temp3->grade);
	printf("\n-----------------------------------");
	temp3=temp3->LL;
	}
}
void del(struct student *st)
{
del_count++;
struct student *temp=head;
while(temp->link!=st)
{
	temp=temp->link;
}
	temp->link=st->link;	
	
}
void avg_check()
{ 
struct student *avg;
avg=head;
if(head->average>90)
{
    printf("\nHead is changed");
}
printf("****************");
printf("\nStudents who scored above 90: ");
while(avg->link!=NULL)
{
	
	if(avg->average>=90)
	{
		printf("\nname: %s",avg->stud_name); 
		printf("\nregister number: %s",avg->reg_num); 
		printf("\nmark1: %d",avg->mark1); 
		printf("\nmark2: %d",avg->mark2); 
		printf("\nmark3: %d",avg->mark3); 
		printf("\naverage: %f",avg->average);
		printf("\ngrade: %c",avg->grade);
		printf("\n-----------------------------------");
		del(avg);
	}
	avg=avg->link;
}
avg=head->link;
printf("\n\nOriginal list after deletion:  ");
while(avg!=NULL)
{
	printf("\nname: %s",avg->stud_name); 
	printf("\nregister number: %s",avg->reg_num); 
	printf("\nmark1: %d",avg->mark1); 
	printf("\nmark2: %d",avg->mark2); 
	printf("\nmark3: %d",avg->mark3); 
	printf("\naverage: %f",avg->average);
	printf("\ngrade: %c",avg->grade);
	printf("\n-----------------------------------");
	avg=avg->link;
}

}


int main()
{
	struct student* s1[10];
	int i,n;
	printf("Enter the number of students: "); scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    insertion(s1[i]);
	}
	info();
	// reverse();
	avg_check();
	printf("\n Count of Insertions:  %d",n);
	printf("\n Count of Deletion: %d",del_count);
}



