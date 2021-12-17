#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversing(struct Node *ptr)
{
   while(ptr!=NULL)
   {
       printf("Element : %d\n",ptr->data);
       ptr = ptr->next;
   }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));

    //link first and second nodes
    head->data = 7;
    head->next = second;

    //link second and third nodes
    second->data = 11;
    second->next = third;

    //terminate the linked list
    third->data = 66;
    third->next = NULL;
    linkedlistTraversing(head);
    return 0;
}
