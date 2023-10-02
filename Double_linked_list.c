#include <stdio.h>
#include<stdlib.h>

// defining the structure
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};


struct node *ptr;
struct node *head;

// Insertion at the start
void insertion_start()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value to be inserted \n");
    newnode->data=scanf("%d",&value);
    if (head==NULL){
        head=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        newnode->prev=NULL;
        head=newnode;
    }
}

// insertion at the end
void insertion_end()
{
    ptr=head;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value to be inserted\n");
    newnode->data=scanf("%d",&value);
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
    ptr=newnode;
}

// insertion at ethe middle postion by the element
void insertion_mid_by_element()
{
    ptr=head;
    int x;
    printf("enter the element\n");
    scanf("%d",&x);
    while (ptr->data!=x)
    {
        ptr=ptr->next;
    }
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("enter the value to be inserted \n");
    newnode->data=scanf("%d",&value);
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next->prev=newnode;
    ptr->next=newnode;
}


// Deletion at the start
void deletion_start()
{
    if (head=NULL)
    {
        printf("Underflow");
    }
    else
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp=head;
        printf("Element deleted : %d",temp->data);
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
    }
}

// deletion at the end
void deletion_end()
{
    ptr=head;
    struct node *temp;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp=ptr;
    printf("element deleted is : %d",temp->data);
    ptr=ptr->prev;
    ptr->next=NULL;
}

// function fordisplay of the linked list
void display(){
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}

// driver function
int main(){
    printf("Double linked list implementation\n");
    printf("Please choose an otion from the gievn ones");
    printf("Options \n");
    int option=0;
    while (option<7)
    {
        printf("choose an option");
        printf("Enter 1 to insert at the begining\n");
        printf("Enter 2 to insert at the mid  by the choice element\n");
        printf("Enter 3 to insert at the end\n");
        printf("Enter 4 to insert at the start\n");
        printf("Enter 5 to insert at the end\n");
        printf("Enter 6 to display the linked list\n");
        printf("press any other to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                insertion_start();
                break;
            case 2:
                insertion_mid_by_element();
                break;
            case 3:
                insertion_end();
                break;
            case 4:
                deletion_start();
                break;
            case 5:
                deletion_end();
                break;
            case 6:
                display();
                break;
    }
  }
  return 0;
}