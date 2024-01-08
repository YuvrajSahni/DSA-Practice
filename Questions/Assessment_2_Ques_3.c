#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define NAME_LEN 60
#define REGISTER_NO_LEN 10

int headChangedDuringInsertion = 0;
int headChangedDuringDeletion = 0;

typedef struct Student {
    char studName[NAME_LEN];
    char regNum[REGISTER_NO_LEN];
    int mark1, mark2, mark3;
    int total;
    float average;
    char grade;
} Student;

typedef struct Node {
    Student data;
    struct Node *next;
} Node;

typedef struct LinkedList {
    Node *head;
} LinkedList;

LinkedList *newLinkedList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

Node *newNode(Student stud) {
    Node *node = malloc(sizeof(Node));
    node->data = stud;
    node->next = NULL;
    return node;
}

/*	Might be problematic	*/
void swapData(Student *stud1, Student *stud2) {
    Student temp = *stud1;
    *stud1 = *stud2;
    *stud2 = temp;
}


void addAtBeginning(LinkedList *list, Student stud) {
    headChangedDuringInsertion++;
    if (list->head == NULL) {
        // check for empty list
        list->head = newNode(stud);
        list->head->next = list->head;
        return;
    }

    // add node after head with head's data
    // change head's data to new data
    Node *node = newNode(list->head->data);
    node->next = list->head->next;
    list->head->next = node;

    // put new data to head
    list->head->data = stud;
}

void addAtLast(LinkedList *list, Student stud) {
    addAtBeginning(list, stud);
    list->head = list->head->next;
}

bool alreadyExists(LinkedList *list, Student stud) {
    Node *curr = list->head;
    do {
        // check for equality of string
        if (strcmp(curr->data.regNum, stud.regNum) == 0) return true;
        curr = curr->next;
    } while (curr != list->head);

    return false;
}

void printStudent(Student stud) {
    printf("Student{studName=%s, regNum=%s, mark1=%d, mark2=%d, mark3=%d, total=%d, average=%f, grade=%c}\n",
           stud.studName, stud.regNum, stud.mark1, stud.mark2, stud.mark3, stud.total, stud.average, stud.grade);
}

void printList(LinkedList *list) {
    if (list->head == NULL) {
        printf("(null)\n");
        return;
    }

    Node *curr = list->head;
    do {
        printStudent(curr->data);
        curr = curr->next;
    } while (curr != list->head);
}

void partC(LinkedList *list, LinkedList *new) {
    if (list->head == NULL) { return; }

    Node *curr = list->head;
    do {
        // assumption: no marks can be greater than 100, only under this
        // assumption will my if condition work, otherwise, we would have
        // explicitly check each mark, so that each mark is > 90
        // add node to new list
        if (curr->data.total > 270)
            addAtLast(new, curr->data);
        curr = curr->next;
    } while (curr != list->head);
}

void deleteHead(LinkedList *list) {
    if (list->head == NULL) { return; }

    // if list only contains 1 node
    if (list->head->next == list->head) {
        free(list->head);
        list->head = NULL;
        return;
    }
    Node *toBeDeleted = list->head->next;
    list->head->data = toBeDeleted->data;
    list->head->next = toBeDeleted->next;
    free(toBeDeleted);
}

/* Will delete head of the array if node is NULL  */
void deleteNext(LinkedList *list, Node *node) {
    if (list->head == NULL) { return; }

    // delete head check
    if (node == NULL || node->next == list->head) {
        deleteHead(list);
        return;
    }

    Node *toBeDeleted = node->next;
    node->next = toBeDeleted->next;
    free(toBeDeleted);
}

void partD(LinkedList *list, LinkedList *new) {
    if (list->head == NULL) { return; }

    Node *curr = list->head, *prev = NULL;

    do {
        if (curr->data.total < 120) {
            // add at last of new list
            addAtLast(new, curr->data);

            Node *next = curr->next;    // save ref of node next to the one which is going to be deleted
            // delete the node from the current list
            deleteNext(list, prev);
            prev = curr;
            curr = next;
            continue;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != list->head);
}

void freeLinkedList(LinkedList *list) {
    Node *curr = list->head;
    do {
        Node *next = curr->next;
        free(curr);
        curr = next;
    } while (curr != list->head);

    list->head = NULL;
}

char assignGrade(float average) {
    if (average > 90) return 'S';
    else if (average > 80) return 'A';
    else if (average > 70) return 'B';
    else if (average > 60) return 'C';
    else if (average > 50) return 'D';
    else if (average > 40) return 'E';
    else return 'F';
}


int main(void) {
    int inputSize;
    printf("Enter number of students: ");
    scanf("%d", &inputSize);

    LinkedList *list = newLinkedList();

    int count = 0;
    while (inputSize-- > 0) {
        // create Student struct
        char studName[NAME_LEN];
        char regNum[REGISTER_NO_LEN];
        printf("Enter students name: ");
        scanf("%s", studName);
        printf("Enter roll number: ");
        scanf("%s", regNum);
        int mark1, mark2, mark3;
        printf("Enter mark1: ");
        scanf("%d",&mark1);
        printf("Enter mark2: ");
        scanf("%d",&mark2);
        printf("Enter mark3: ");
        scanf("%d",&mark3);

        Student stud;
        strcpy(stud.studName, studName);
        strcpy(stud.regNum, regNum);
        stud.mark1 = mark1;
        stud.mark2 = mark2;
        stud.mark3 = mark3;
        stud.total = mark1 + mark2 + mark3;
        stud.average = stud.total / 3;
        stud.grade = assignGrade(stud.average);

        // part a
        if (count++ % 2 == 0) addAtLast(list, stud);
        else addAtBeginning(list, stud);
    }
    printf("List after input: \n");
    printList(list);

    // part c
    LinkedList *greaterThan90 = newLinkedList();
    partC(list, greaterThan90);
    printf("\nMain List after partC function\n");
    printList(list);
    printf("\nNew List which has students whose each mark is greater than 90\n");
    printList(greaterThan90);

    // part d
    LinkedList *lessThan40 = newLinkedList();
    partD(list, lessThan40);
    printf("\nMain List after partD function\n");
    printList(list);
    printf("\nNew List which has students whose each mark is less than 40\n");
    printList(lessThan40);

    // part b and e
    printf("\nHead node is updated %d during insertions."
           "\nHead node is updated %d during deletions.", headChangedDuringInsertion, headChangedDuringDeletion);

    // free memory for all the lists
    freeLinkedList(list);
    freeLinkedList(greaterThan90);
    freeLinkedList(lessThan40);
    printf("\nYashvardhan Thakker- 21BIT0060");

    return 0;
}