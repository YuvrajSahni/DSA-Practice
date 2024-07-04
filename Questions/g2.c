#include<stdio.h>
#include<stdlib.h>
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
int S_count=0,A_count=0,B_count=0,C_count=0,D_count=0,E_count=0,F_count=0;

void grade_check(struct student *stu)
{
	
	if(stu->grade=='S')
	{	S_count++;	}
	else if(stu->grade=='A')
	{	A_count++;	}
	else if(stu->grade=='B')
	{	B_count++;	}
	else if(stu->grade=='C')
	{
		C_count++;
	}
	else if(stu->grade=='D')
	{
		D_count++;
	}
	else if(stu->grade=='E')
	{
		E_count++;
	}
	else if(stu->grade=='F')
	{
		F_count++;
	}
	else
	printf("");
}

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
	grade_check(temp2);
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
		else
		printf("");
		
		
		
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=stu;
		stu->link=NULL;
		
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
void fail_check()
{ 
struct student *fail;
fail=head->link;
printf("\n****************");
printf("\nStudents who Failed ");
while(fail->link!=NULL)
{
	
	if(fail->grade=='F')
	{
		printf("\nname: %s",fail->stud_name); 
		printf("\nregister number: %s",fail->reg_num); 
		printf("\nmark1: %d",fail->mark1); 
		printf("\nmark2: %d",fail->mark2); 
		printf("\nmark3: %d",fail->mark3); 
		printf("\naverage: %f",fail->average);
		printf("\ngrade: %c",fail->grade);
		printf("\n-----------------------------------");
		del(fail);
	}
	fail=fail->link;
}
fail=head->link;
//printf("\n\nOriginal list after deletion:  ");
while(fail!=NULL)
{
	printf("\nname: %s",fail->stud_name); 
	printf("\nregister number: %s",fail->reg_num); 
	printf("\nmark1: %d",fail->mark1); 
	printf("\nmark2: %d",fail->mark2); 
	printf("\nmark3: %d",fail->mark3); 
	printf("\naverage: %f",fail->average);
	printf("\ngrade: %c",fail->grade);
	printf("\n-----------------------------------");
	fail=fail->link;
}

}

int main()
{
	struct student* s1[10];
	int i,n;
	printf("Enter the number of students: "); scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		insertion(s1[i]);
	}
	info();
	fail_check();
	
	printf("\n Count of S:  %d",S_count);
	printf("\n Count of A:  %d",A_count);
	printf("\n Count of B:  %d",B_count);
	printf("\n Count of C:  %d",C_count);
	printf("\n Count of D:  %d",D_count);
	printf("\n Count of E:  %d",E_count);
	printf("\n Count of F:  %d",F_count);
	printf("\n Count of Insertions:  %d",n);
	printf("\n Count of Deletion: %d",del_count);
}