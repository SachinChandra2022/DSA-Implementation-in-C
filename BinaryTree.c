// AIM : Binary Tree implementation using linkedlist

// Algorithm

// 1. insertion

// go to root node

// if value to be inserted< root->vaue

// if root==NULL: insert the value

// else:

// root=root->left

// goto step 1

// else

// if root->right==NULL

// insert the value

// else

// root=root->right

// goto step 1
// 2. Inorder Traversal

// if root==NULL break

// else:

// print root->value

// goto initial step and repeat the steps for root=root->left

// goto initial stap and repeat the steps for root=root->right

// 3. Preorder Traversal

// if root==NULL break

// else:

// goto initial step and repeat the steps for root=root->left

// print root->value

// goto initial step and repeat the steps for root=root->right

// 3. Postorder Traversal

// if root==NULL break

// else:

// goto initial step and repeat the steps for root=root->right

// print root->value

// goto initial step and repeat the steps for root=root->left

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

//return a new node with the given value

struct node *getNode(int val)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

//inserts nodes in the binary search tree

struct node *insertNode(struct node *root, int val)
{
     if(root == NULL)
         return getNode(val);

     if(root->key < val)
         root->right = insertNode(root->right,val);

     if(root->key > val)
         root->left = insertNode(root->left,val);

     return root;
}

//inorder traversal of the binary search tree

void inorder(struct node *root)
{
    if(root == NULL)
        return;

    //traverse the left subtree

    inorder(root->left);

    //visit the root

    printf("%d ",root->key);

    //traverse the right subtree

    inorder(root->right);
}

void preorder(struct node* root){
  if (root==NULL){
    return;
  }
  printf("%d",root->key);

  preorder(root->left);

  preorder(root->right);

}

void postorder(struct node* root){
  if (root==NULL){
    return;
  }

  printf("%d",root->key);

  postorder(root->right);

  postorder(root->left);

}

int main()
{
   struct node *root = NULL;


    int data;
    char ch;
        /*  Do while loop to display various options to select from to decide the input  */
        do
        {
            printf("\nSelect one of the operations::");
            printf("\n1. To insert a new node in the Binary Tree");
            printf("\n2. To display the nodes of the Binary Tree(via Inorder Traversal).\n");

            int choice;
            scanf("%d",&choice);
            switch (choice)
            {
            case 1 :
                printf("\nEnter the value to be inserted\n");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
            case 2 :
                printf("\nInorder Traversal of the Binary Tree::\n");
                inorder(root);
                break;

            case 3 :
                printf("\n Preorder Traversal of binary tree");
                break;

            case 4:
                printf("\n Postorder traversal of binary tree");
                break;

            default :
                printf("Wrong Entry\n");
                break;
            }

            printf("\nDo you want to continue (Type y or n)\n");
            scanf(" %c",&ch);
        } while (ch == 'Y'|| ch == 'y');

   return 0;
}