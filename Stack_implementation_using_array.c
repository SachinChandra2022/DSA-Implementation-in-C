#include <stdio.h>
#include <stdlib.h>
int n;
int stack[];
int top=-1;

// Push Function
void push()
{
  if (top>n-1)
  {
    printf("Overflow");
  }
  else
  {
    top+=1;
    int value;
    printf("enter the value to be pushed into the stack");
    scanf("%d",&value);
    stack[top]=value;
  }
}

// Pop Function
void pop()
{
  if(top==-1)
  {
    printf("Underflow");
  }
  else{
    top-=1;
  }
}

// Peek Function
void peek()
{
  printf("%d",stack[top]);
}

// Driver Function
int main()
{
    printf("enter the dezired size of stack");
    scanf("%d",&n);
    int stack[n];
    printf("Double linked list implementation\n");
    printf("Please choose an otion from the gievn ones");
    printf("Options \n");
    int option=0;
    while (option<4){
        printf("choose an option");
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to peak\n");
        printf("Press any other to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peak();
                break;
        }
    }
    return 0;
}