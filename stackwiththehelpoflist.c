#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node*top =NULL;

void push(int value)
{
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof ( struct Node));
    if(ptr ==NULL)
    {
        printf("stack is ovweflow");
    }
    else
    {
        ptr ->data =value;
        ptr ->next =top;
        top =ptr;
        printf("\n Data is pushed");

    }
}

int pop()
{
    if (top == NULL)
       printf("\n Stack is underflow");
    else
    {
        struct  Node *temp =top;
        top =top -> next;
        int tempdata = top -> data;
        free(temp);
        printf("\n%d",tempdata);
        
    }
}
    void main()
    {
        push(10);
        push(20);
        push(40);
        push(90);
        pop();
        getch();
    }
