#include <stdio.h>
#include <stdlib.h>

// Defining the structure of the node
struct node
{
    int data;
    struct node *next;
};

struct node *ptr;
struct node *head;
struct node *end;
struct node *nd;
struct node *prev;
struct node *nextnd;

// Indertion at the start position
void insertion_start()
{
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  int value;
  printf("enter the value to be inserted");
  newnode->data=scanf("%d",&value);
  end=head;
  while(end!=NULL)
  {
    end=end->next;
  }
  if (end==NULL)
  {
    end=newnode;
    newnode->next=newnode;
  }
  else
  {
    end=newnode;
    end->next=head;
  }

}

// Insertion at the end
void insertion_end()
{
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  int value;
  printf("enter the value to be inserted");
  newnode->data=scanf("%d",&value);
  end=head;
  while(end->next!=head)
  {
      end=end->next;
  }
  if (head=NULL)
  {
    head=newnode;
    newnode->next=newnode;
    end=head;
  }
  else
  {
    end->next=newnode;
    newnode->next=head;
    end=end->next;
  }
}

void deletion_start()
{
  struct node *temp=head;
  printf("data deleted %d",temp->data);
  end->next=head->next;
  head=head->next;
  temp->next=NULL;
  fflush(stdin);
}

void deletion_end()
{
  ptr=head;
  while(ptr->next!=end)
  {
    ptr=ptr->next;
  }
  ptr->next=head;
  struct node *temp;
  temp=end;
  printf("data deleted %d",temp->data);
  end=ptr;
  temp->next=NULL;
  fflush(stdin);
}

void display()
{
    ptr=head;
    while(ptr->next!=head)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
        printf(" linked list implementation\n");
        int option=0;
        while (option<7)
        {
        printf("Options \n");
        printf("choose an option");
        printf("Enter 1 to insert at the begining\n");
        printf("Enter 2 to insert at the end\n");
        printf("Enter 3 to delete at the start\n");
        printf("Enter 4 to delete at the end\n");
        printf("Enter 5 to display the linked list\n");
        printf("press any other to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                insertion_start();
                break;
            case 2:
                insertion_end();
                break;
            case 3:
                deletion_start();
                break;
            case 4:
                deletion_end();
                break;
            case 5:
                display();
                break;
        }
    }
        return 0;
}