#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

int main()
{
    int choice;

    while(1)
    {
        printf("...Stack Using Linked List.....\n");
        printf("1.Push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("5.Exit\n\n");

        printf("Enter your choice :\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:push();
             break;
        case 2:pop();
             break;
        case 3:peek();
             break;
        case 4:display();
             break;
        case 5: exit(1);
             break;
        default:printf("Wrong Choice\n");
             break;
        }
    }

}
void push()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data :\n");
    scanf("%d",&temp->data);

    temp->link=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is underflow.\n");
    }
    else
    {
        temp=top;
        top=temp->link;
        temp->link=NULL;
        free(temp);
    }
}
void peek()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("No Elements in Stack.\n");
    }
    else
    {
        temp=top;
        printf("Top Element is: %d\n",temp->data);
    }
}
void display()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("No Elements.\n");
    }
    else
    {
        temp=top;
        printf("Stack Elements are : \n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
