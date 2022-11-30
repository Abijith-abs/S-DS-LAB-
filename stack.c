#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;    
    newNode->next = head;
    head = newNode;
}
void pop()
{
    struct node *temp = head;
    if (head == NULL)
        printf("STACK IS EMPTY\n");
    else
    {
        printf("Poped element is = %d\n", head->data);        
        head = head->next;
    }
}
void printList()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
