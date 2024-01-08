#include<stdlib.h>
#include<string.h>
#include<stdio.h>
static int countdelete=0;
static int counthead=0;
static int count=0;
struct Student
{
 char stud_name[100];
 char regno[100];
 int mark1;
 int mark2;
 int mark3;
 float average;
 char grade;
 struct Student *next;
};
struct Student *head=NULL;
struct StudentList1
{
 char stud_name[100];
 char regno[100];
 int mark1;
 int mark2;
 int mark3;
 float average;
 char grade;
 struct StudentList1 *next;
};
struct StudentList1 *head1=NULL;

struct StudentList2
{
 char stud_name[100];
 char regno[100];
 int mark1;
 int mark2;
 int mark3;
 float average;
 char grade;
 struct StudentList2 *next;
};
struct StudentList2 *head2=NULL;

struct Student *temp;
struct Student *tail;

void insert( char* name, char* reg, int m1,int m2,int m3,float avg,char gd,int c)
{
 
 struct Student *s1 = (struct Student *) malloc(sizeof(struct Student));
 strcpy(s1->stud_name, name);
 strcpy(s1->regno, reg);
 s1->mark1=m1;
 s1->mark2=m2;
 s1->mark3=m3;
 s1->average=avg;
 s1->grade=gd;
 
 		if(head==NULL)
     	{
		head=s1;
		tail=s1;
		s1->next = head;
		printf("first node inserted\n");
        }
        else
        {
        	if(c%2==0)
        	{
        	s1->next = head;
            temp=head;
            head = s1;
            tail->next=head;
			}
			else if(c%2!=0)
			{
				temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				temp->next=s1;
				s1->next=head;
				tail->next=s1;
                tail=s1;
			}
		}
}
void createList1()
{
	struct Student *sl=head;
	struct StudentList1 *l=head1;
	struct StudentList1 *ptr;
	do
	{
		if(sl->mark1>90 && sl->mark2>90 && sl->mark3>90)
		{
			ptr=(struct StudentList1*)malloc(sizeof(struct StudentList1));
            strcpy(ptr->stud_name,sl->stud_name);
            strcpy(ptr->regno,sl->regno);
            ptr->mark1=sl->mark1;
            ptr->mark2=sl->mark2;
            ptr->mark3=sl->mark3;
            ptr->average=sl->average;
            ptr->grade=sl->grade;
            if(head1==NULL)
	        {
		        head1=ptr;
		        ptr->next = head1;
            }
            else
            {
            	l=head1;
            	while(l->next!=head1)
            	{
     	            l=l->next;
	        	}
		        l->next=ptr;
		        ptr->next = head1;
	        }	
		}
		sl=sl->next;
	}while(sl!=head);
}

void createList2()
{
	struct Student *sl2=head;
	struct Student *sl3=head;
	struct StudentList2 *l2=head2;
	struct StudentList2 *ptr;
	do
	{
		if(sl2->mark1<40 && sl2->mark2<40 && sl2->mark3<40)
		{
			ptr=(struct StudentList2*)malloc(sizeof(struct StudentList2));
            strcpy(ptr->stud_name,sl2->stud_name);
            strcpy(ptr->regno,sl2->regno);
            ptr->mark1=sl2->mark1;
            ptr->mark2=sl2->mark2;
            ptr->mark3=sl2->mark3;
            ptr->average=sl2->average;
            ptr->grade=sl2->grade;
            if(head2==NULL)
	        {
		        head2=ptr;
		        ptr->next = head2;
            }
            else
            {
            	l2=head2;
            	while(l2->next!=head2)
            	{
     	            l2=l2->next;
	        	}
		        l2->next=ptr;
		        ptr->next = head2;
	        }
			
			if(sl2==sl3)
			{
 	            countdelete++;
                head = head->next;
                free(sl2);
                sl2=sl3;
            }
            else
			{
                sl3->next = sl2->next;
                free(sl2);
                sl2=sl3;
            }
            printf("Record Successfully Deleted !!!\n");
            return;
		}
		sl3=sl2;
		sl2=sl2->next;
	}while(sl2!=head);
}


void display()
{
struct Student * temps = head;
    if (head==NULL)
        printf("\nList is empty\n");
    else 
	{
        do {
             printf("Registration no. %s\n", temps->regno);
             printf("Name: %s\n", temps->stud_name);
             printf("Mark1 %d\n", temps->mark1);
             printf("Mark2 %d\n", temps->mark2);
             printf("Mark3 %d\n", temps->mark3);
             printf("Average %f\n", temps->average);
             printf("Grade %c\n",temps->grade);
            temps = temps->next;
        } while (temps != head);
    }
}
void display1()
{
struct StudentList1 *te = head1;
    if (head1==NULL)
        printf("\nList is empty\n");
    else 
	{
        do {
             printf("Registration no. %s\n", te->regno);
             printf("Name: %s\n", te->stud_name);
             printf("Mark1 %d\n", te->mark1);
             printf("Mark2 %d\n", te->mark2);
             printf("Mark3 %d\n", te->mark3);
             printf("Average %f\n", te->average);
             printf("Grade %c\n",te->grade);
            te = te->next;
        } while (te != head1);
    }
}

void display2()
{
struct StudentList2 *te2 = head2;
    if (head2==NULL)
        printf("\nList is empty\n");
    else 
	{
        do {
             printf("Registration no. %s\n", te2->regno);
             printf("Name: %s\n", te2->stud_name);
             printf("Mark1 %d\n", te2->mark1);
             printf("Mark2 %d\n", te2->mark2);
             printf("Mark3 %d\n", te2->mark3);
             printf("Average %f\n", te2->average);
             printf("Grade %c\n",te2->grade);
            te2 = te2->next;
        } while (te2 != head2);
    }
}

int main()
{
 head = NULL;
 int choice;
 char name[100];
 char regno[100];
 int mark1,mark2,mark3;
 float average;
 char grade;
 printf("1. To insert student details\n2. To display student details\n3. To delete student details\n4. To display student details above 90 \n5. To print reverse\n6. To print number of times head is changed during insertion\n7. To print number of times head is changed during deletion");
 do 
 {
 printf("\nEnter Choice: ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 printf("Enter mark1: ");
 scanf("%d", &mark1);
 printf("Enter mark2: ");
 scanf("%d", &mark2);
 printf("Enter mark3: ");
 scanf("%d", &mark3);
 printf("Enter name: ");
 scanf("%s", name);
 printf("Enter register number ");
 scanf("%s", regno);
 average=(mark1+mark2+mark3)/3.0;
 if(average>=90 && average<=100)
 grade='S';
 else if(average>=80 && average<90)
 grade='A';
else if(average>=70 && average<80)
 grade='B';
 else if(average>=60 && average<70)
 grade='C';
 else if(average>=50 && average<60)
 grade='D';
 else if(average>=40 && average<50)
 grade='E';
else
grade='F';
count++;
 insert(name, regno, mark1,mark2,mark3,average,grade,count);
 break;
 case 2:
 	display();
 	break;
case 3:
 	createList1();
 	display1();
 	break;
case 4:
 	createList2();
 	display2();
 	printf("Actual linklist is:\n");
 	display();
 	break;
 default:
 printf("Wrong choice\n");
 }
 } while (choice != 0);
}