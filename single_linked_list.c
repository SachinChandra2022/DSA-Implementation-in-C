#include <stdio.h>
#include <stdlib.h>

// Defining struct node
struct node
{
  int data;
  struct node *next;
};

// creating struct pointers
struct node *ptr;
struct node *head;
struct node *prev;
struct node *nd;
struct node *nextnd;

// insertion Function
void insertion_first_place()
{
  struct node *newnode;
  int value;
  newnode=malloc(sizeof(struct node));
  printf("Please enter the value to be inserted \n");
  newnode->data=scanf("%d",&value);
  if (head==NULL){
    head=newnode;
    newnode->next=NULL;
  }
  else{
    newnode->next=head;
    head=newnode;
    }
}

// Function for insertion at the end
void insertion_last_place()
{
  struct node *newnode;
  newnode=malloc(sizeof(struct node));
  printf("please enter the data to be inserted\n");
  int value;
  scanf("%d",&value);
  newnode->data=value;
  newnode->next=NULL;
  if (head==NULL){
    head=newnode;
  }
  else{
    ptr=head;
    while(ptr->next!=NULL){
      ptr=ptr->next;
    }
    ptr->next=newnode;
    ptr=newnode;
  }
}

// Function for inserition in the mid by the choice element
void insertion_mid_by_element()
{
  void before(){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("Please enter the element bofore which new node is to be inserted\n");
    int element;
    scanf("%d",&element);
    printf("Please enter the value to be inserted before the element\n");
    int value;
    newnode->data=scanf("%d",&value);
    while(ptr->next->data!=element){
      ptr=ptr->next;
    }
    prev=ptr;
    nd=ptr->next;
    prev->next=newnode;
    newnode->next=nd;
  }

  void after(){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("Please enter the element bofore which new node is to be inserted\n");
    int element;
    scanf("%d",&element);
    printf("Please enter the value to be inserted before the element\n");
    int value;
    newnode->data=scanf("%d",&value);
    while(ptr->data!=element){
      ptr=ptr->next;
    }
    nd=ptr->next;
    nextnd=ptr->next->next;
    nd->next=newnode;
    newnode->next=nextnd;
  }
  struct node *ptr=head;
  printf("Press 1 if the element is to be inserted before the choice element\n");
  printf("Press 2 if the element is to be inserted after the choice element\n");
  int option;
  scanf("%d",&option);
  switch(option){
    case 1:
      before();
      break;

    case 2:
      after();
      break;

  }
}

// Function for insertion in the mid at defined position
void insertion_mid_by_pos(){
    printf("Please enter the postion\n");
    int pos;
    scanf("%d",&pos);
    struct node *newnode;
    ptr=head;
    newnode=malloc(sizeof(struct node));
    int value;
    newnode->data=scanf("%d",&value);
    int i=0;
    while (i<pos){
        ptr=ptr->next;
        i=i+1;
    }
    ptr->next=newnode;
    newnode-> next=ptr->next->next;
}

// deletion of the first element
void deletion_first(){
  ptr=head;
  printf("value deleted: %d \n", ptr->data);
  head=ptr->next;
  ptr->next=NULL;
  fflush(stdin);
}

// deletion of the element at the last
void deletion_last(){
    ptr=head;
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
    fflush(stdin);
}

// deletion by element at any position
void deletion_mid_by_element(){
    printf("please enter the element to be deleted\n");
    int element;
    scanf("%d",&element);
    while (ptr->next->data!=element){
        ptr=ptr->next;
    }
    prev=ptr;
    prev->next=ptr->next;
    ptr->next=NULL;
    fflush(stdin);
}

// deletion at mid by position
void deletion_mid_by_pos(){
    int i=1;
    ptr=head;
    int n;
    scanf("%d",&n);
    while (i<n){
        ptr=ptr->next;
        i++;
    }
    prev=ptr;
    ptr=ptr->next;
    prev->next=ptr->next;
    ptr->next=NULL;
    fflush(stdin);
}

// Count of total number of elements
void count()
{
    ptr=head;
    int c=1;
    while (ptr->next!=NULL){
        c+=1;
        ptr=ptr->next;
    }
    printf("total number of elements = %d \n",c);
}

// Driver Function
int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    printf("Linked list implementation");
    printf("\n press 1 for insertion of element at first place");
    printf("\n press 2 for insertion of element at last place");
    printf("\n press 3 for insertion of element at mid place by position of the element");
    printf("\n press 4 for insertion of element at mid place before or after the choice element");
    printf("\n press 5 for deletion of the first element");
    printf("\n press 6 for deletion of last element");
    printf("\n press 7 for deletion of mid element by position of the element");
    printf("\n press 8 for deletion of element before or after the choice element");
    printf("\n press 9 for displaying the number of elements in the list");
    int x=0;
    while (x<10){
      printf("Please enter the option number");
      scanf("%d",&x);
      switch (x){
        case 1:
          insertion_first_place();
          break;

        case 2:
          insertion_last_place();
          break;
        case 3:
          insertion_mid_by_pos();
          break;
        case 4:
          insertion_mid_by_element();
          break;

        case 5:
          deletion_first();
          break;

        case 6:
          deletion_last();
          break;

        case 7:
          deletion_mid_by_pos();
          break;

        case 8:
          deletion_mid_by_element();
          break;

        case 9:
          count();
          break;

      }
    }
    return 0;
}