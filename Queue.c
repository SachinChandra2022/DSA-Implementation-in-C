// AIM: Queue Implementation using array

// Algorithm

// n=size of the queue

// queue = array[n]

// front=-1

// rear=-1

// 1. enqueue

// if rear==n:

// print('overflow')
// else: if front=-1 and rear=-1:

//   front++
//   rear++
//   queue[rear]=value

// else:

//   rear++
//   queue[rear]=value
// 2. dequeue

// if front==-1 or front>rear:

// print('underflow')
// else:

// front++
// 3. peek

// if front==-1 or front>rear:

// print('onderflow')
// else:

// print(queue[front])

#include<stdio.h>
#include<stdlib.h>
int front=-1,end=-1;

void enqueue(int n,arr[]){
  if (end<n-1)
  {
    end+=1;
    printf("enter the value to be queued");
    int x;
    arr[end]=scanf("%d",&x);
  }
  else {
    printf("Overflow");
  }
}

void dequeue(){
  if (end=-1 || front>end){
    printf("Underflow");
  }
  else
  {
    front+=1;
  }
}
void peek(int arr[]){
  if (end=1 || front>end){
    printf("No elements to print");
  }
  else{
    printf(arr[front]);
  }
}

int main(){
  int n,front=-1,end=-1;
  printf("enter the size of the queue");
  scanf("%d",&n);
  int arr[n];
  int option=0;
  while (option<4){
    printf("Choose the option for desired operation");
    printf("Press 1 for queuing an element");
    printf("Press 2 for dequeuing an element");
    printf("Press 3 for peeking the first element");
    scanf("%d",&option);
    switch(option){
      case 1:
        enqueue(n,arr);
        break;
      case 2:
        dequeue();
        break;
      case 3:
        peek(arr);
        break;
    }
  }
  return 0;
}