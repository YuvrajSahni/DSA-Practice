#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char student_name[60];
    char reg_no[10];
    int mark1;
    int mark2;
    int mark3;
    int total;
    float average;
    char grade;
    struct Student *link;
} * head, *thead;

void insertatend()
{
    char s_name[60];
    char r_no[10];
    int m1, m2, m3;

    struct Student *newnode = (struct Student *)malloc(sizeof(struct Student));
    struct Student *temp = head;
    newnode->link = NULL;
    printf("Enter the name: ");
    scanf("%s", s_name);

    printf("Enter the reg no: ");
    scanf("%s", r_no);
    struct Student *duplicate = head;
    while (duplicate != NULL)
    {
        if (strcmp(duplicate->reg_no, r_no) == 0)
        {
            printf("Duplicate Registration Number");
            printf("Enter the reg no AGAIN!!!!: ");
            scanf("%s", r_no);
        }
        duplicate = duplicate->link;
    }
    printf("Enter marks 1: ");
    scanf("%d", &m1);

    printf("Enter marks 2: ");
    scanf("%d", &m2);

    printf("Enter marks 3: ");
    scanf("%d", &m3);

    strcpy(newnode->student_name, s_name);
    strcpy(newnode->reg_no, r_no);
    newnode->mark1 = m1;
    newnode->mark2 = m2;
    newnode->mark3 = m3;

    newnode->total = m1 + m2 + m3;
    newnode->average = (m1 + m2 + m3) / 3;

    if (newnode->average > 91 && newnode->average < 100)
    {
        newnode->grade = 'S';
    }

    else if (newnode->average >= 81 && newnode->average < 90)
    {
        newnode->grade = 'A';
    }

    else if (newnode->average >= 71 && newnode->average < 80)
    {
        newnode->grade = 'B';
    }

    else if (newnode->average >= 61 && newnode->average < 70)
    {
        newnode->grade = 'C';
    }

    else if (newnode->average >= 51 && newnode->average < 60)
    {
        newnode->grade = 'D';
    }

    else if (newnode->average >= 41 && newnode->average < 50)
    {
        newnode->grade = 'E';
    }

    else if (newnode->average <= 40)
    {
        newnode->grade = 'F';
    }
    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = newnode;
    }
}
void reverse()
{
    struct Student *next = NULL;
    struct Student *curr = head;
    struct Student *prv = NULL;
    while (curr != NULL)
    {
        next = curr->link;
        curr->link = prv;
        prv = curr;
        curr = next;
    }
    head = prv;
}
void topper()
{
    struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));
    struct Student *temp = head;
    struct Student *prv = NULL;
    while (temp != NULL)
    {
        if (temp->average > 90)
        {
            newNode = temp;
            if (thead == NULL)
            {
                thead = newNode;
            }
            else
            {
                struct Student *ttemp = thead;
                while (ttemp->link != NULL)
                {
                    ttemp = ttemp->link;
                }
                ttemp->link = newNode;
            }
            prv->link = temp->link;
            temp = temp->link;
        }
        else
        {
            prv = temp;
            temp = temp->link;
        }
    }
}
void display()
{
    struct Student *temp = head;
    printf("Students list: \n");
    while (temp != NULL)
    {
        printf("%s\t", temp->student_name);
        printf("%s\t", temp->reg_no);
        printf("%d\t", temp->mark1);
        printf("%d\t", temp->mark2);
        printf("%d\t", temp->mark3);
        printf("%d\t", temp->total);
        printf("%f\t", temp->average);
        printf("%c\t", temp->grade);
        printf("\n");
        temp = temp->link;
    }
    printf("\nTopper's List: \n");

    temp = thead;
    while (temp != NULL)
    {
        printf("%s\t", temp->student_name);
        printf("%s\t", temp->reg_no);
        printf("%d\t", temp->mark1);
        printf("%d\t", temp->mark2);
        printf("%d\t", temp->mark3);
        printf("%d\t", temp->total);
        printf("%f\t", temp->average);
        printf("%c\t", temp->grade);
        printf("\n");
        temp = temp->link;
    }
}

int main()
{
    insertatend();
    insertatend();
    // display();
    topper();
    // reverse();
    display();
}