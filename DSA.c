/*
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five numbers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("five numbers are : %d,%d,%d,%d,%d",a,b,c,d,e);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter five values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("element %d entered : %d\n",i+1,a[i]);
	}
	return 0;
}
*/

/*
#include<stdio.h>
void getdata()
{
	int a[5],i;
	printf("Enter five values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
}

void printdata()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("element %d entered : %d\n",i,a[i]);
	}
}

int main()
{
	getdata();
	printdata();
}
*/

/*
#include<stdio.h>
void getdata()
{
	int a[10],i;
	printf("Enter ten values: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void sum()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("sum is : %d",sum);
}
int main()
{
	getdata();
	sum();
}
*/

/*
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter ten values: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("Element %d entered : %d\n",i+1,a[i]);
	}
	int n;
	printf("Enter the element you want to search : ");
	scanf("%d",&n);
	printf("You have entered : %d\n",n);
	int f=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("Element exists at position %d",i+1);
			f=1;
			break;
		}
	}
		
	if(f!=1)
	{
		printf("Element does not exist.");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i;
	int n;
	printf("Enter the element you want to search : ");
	scanf("%d",&n);
	printf("You have entered : %d\n",n);
	int f=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			printf("Element exists at position %d",i+1);
			f=1;
			break;
		}
	}
		
	if(f!=1)
	{
		printf("Element does not exist.");
	}
	return 0;
}
*/


//WAP (menu driven) to implement the following in an array:
/*
1.) Traverse and display elements
2.) Search for an element(Linear Search)
3.) Insert an element at any position(start,middle,end)
4.) Delete an element from any position
*/

/*
#include<stdio.h>
int main()
{
	int a[100],i,n,choice,pos,val;
	printf("Enter the number of elements of array : ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	while(1){
	printf("ENTER YOUR CHOICE FROM BELOW OPTIONS :-");
	printf("1.) Traverse and display elements\n");
	printf("2.) Search for an element(Linear Search)\n");
	printf("3.) Insert an element at any position(start,middle,end)\n");
	printf("4.) Delete an element from any position\nExit");
	printf("ENTER : ");
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1:
			{
				for(i=0;i<n;i++)
				{
					printf("Element %d entered : %d\n",i+1,a[i]);
				}
				printf("\n");
				break;	
			}
		case 2:
			{
			int s;
			printf("Enter the element you want to search : ");
			scanf("%d",&s);
			printf("You have entered : %d\n",s);
			int f=0;
			for(i=0;i<n;i++)
			{
				if(a[i]==s)
				{
					printf("Element exists at position %d",i+1);
					f=1;
					break;
				}
			}
		
			if(f!=1)
			{
				printf("Element does not exist.");
			}
			printf("\n");
			break;
			}
		case 3:
			{
				printf("Enter the value which is needed to be inserted in array : ");
				scanf("%d",&val);		
				printf("Enter the position to insert value(between 1 and %d) : ",n+1);
				scanf("%d",&pos);
				for(i=n;i>=pos;i--)
					{
						a[i]=a[i-1];
					}
						a[pos-1]=val;
					printf("Desired element inserted\n");
					printf("Updated array : \n");
					for(i=0;i<n;i++)
					{
						printf("Element %d entered : %d\n",i+1,a[i]);
					}
					printf("\n");
					break;
				}
			case 4: {
				pos=-1;
				printf("Enter the value which is needed to be deleted from the array : ");
				scanf("%d",&val);	
				for(i=0;i<n;i++){
					if(a[i]==val){
						pos=i;
						break;
					}
				}	
				if(pos==-1){
					printf("Value not found in the array.\n");
				}
				else{
					for(i=pos;i<n;i++){
						a[i]=a[i+1];
					}
					n--;	
				}
				printf("Desired element inserted\n");
					printf("Updated array : \n");
					for(i=0;i<n;i++)
					{
						printf("Element %d entered : %d\n",i+1,a[i]);
					}
					printf("\n");
					break;
			}
			case 5:{
				exit(0);
			}
		}
	}
}
*/







//WAP to implement a stack using array with following operations
/*
1) push() - insert element into stack
2) pop() - remove anelemnt from the stack
3) peek() - view the top element without removing it
4) display() - print all the elements of stack
*/

/*
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 8
int stack[MAXSIZE];
int top=-1;
int isEmpty();
int isFull();
void push(int data);
void pop(int data);

isEmpty(){
	if(top==-1)
	return 1;
	else
	return 0;
}

isFull(){
	if(top==MAXSIZE-1)
	return 1;
	else
	return 0;
}

void push(int data){
	if(!isFull())
	{
		top=top+1;
		stack[top]=data;
	}
	else
	{
		printf("Insertion is not possible since stack is full.");
	}
}

void pop(int data){
	if(!isEmpty)
	{
		data=stack[top];
		top=top-1;
	}
	else
	{
		printf("Removing is not possible since stack is empty");
	}
}

int main(){
	int choice,data;
	printf("1) push()\n2) pop()\n3) peek()\n4) display()\n5) exit()\n");
	printf("Enter your choice from above options:");
	scanf("%d",&choice);
	if(choice==1){
		push(data);
	}
	else if(choice==2){
		pop(data);
	}
	else if(choice==3){
	}
}
*/






//QUEUE
//WAP to implement a queue using array with following operations
/*
1) enqueue() - insert element at the rear
2) dequeue() - remove anelemnt from the front
3) peek() - view the front element without removing it
4) display() - print all the elements of queue
*/

/*
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int queue[MAXSIZE];
int rear=-1,front=-1;
int isEmpty();
int isFull();
void enqueue(int data);
void dequeue();
void peek();
void display();

isEmpty(){
	if(front==-1 || front>rear)
	return 1;
	else
	return 0;
}

isFull(){
	if(rear==MAXSIZE-1)
	return 1;
	else
	return 0;
}

void enqueue(int data){
	if(isFull()){
		printf("Insertion is not possible since queue is full!\n");
	}
	else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=data;
		printf("%d inserted into queue.\n",data);
	}
}

void dequeue(){
	if(isEmpty()){
		printf("Deletion is not possible since queue is empty!\n");
	}
	else{
		printf("%d deleted from queue.\n",queue[front]);
		front++;
	}
}

void peek(){
	if(isEmpty()){
		printf("Queue is empty,no front element!\n");
	}
	else{
		printf("Frontmost element is : %d\n",queue[front]);
	}
}

void display(){
	int i;
	if(isEmpty()){
		printf("Queue is empty!\n");
	}
	else{
		printf("Queue elements are : \n");
		for(i=0;i<=rear;i++){
			printf("Element %d : %d\n",i+1,queue[i]);
		}
	}
}

int main(){
	int choice,data,i;
	while(1){
		printf("1) enqueue()\n2) dequeue()\n3) peek()\n4) display()\n5) exit()\n");
		printf("Enter your choice from above options:");
		scanf("%d",&choice);
		printf("\n");
		switch(choice){
			case 1 : {
				printf("Enter the element you want to insert : ");
				scanf("%d",&data);
				enqueue(data);
				printf("\n");
				break;
			}
			case 2 : {
				dequeue();
				printf("\n");
				break;
			}
			case 3 : {
				peek();
				printf("\n");
				break;
			}
			case 4 : {
				display();
				printf("\n");
				break;
			}
			case 5 : {
				exit(0);
			}
			default : {
				printf("Invalid choice! Try again :)\n");
				break;
			}
		}
	}
}
*/



//	BINARY SEARCH TREE
/*
Write a C program to implement a binary search tree(BST) with the following operations:-
1. Insert a node into the BST
2. Delete a node from the BST
3. Search for a given key in the BST
4. Traversal: Inorder,Preorder,Postorder
5. Find the height of the BST
*/
/*
#include<stdio.h>
#include<stdlib.h>

//Structure of a BST node
struct node{
	int data;
	struct node *left,*right;
};

//Function to create a new node
struct node *createNode(int value){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=value;
	newNode->left=newNode->right=NULL;
	return newNode;
}

//Function to insert a new node int BST
struct node* insertNode(struct node* root, int value) {
    if(root==NULL) 
        return createNode(value);
    if(value<root->data)
        root->left=insertNode(root->left,value);
    else if(value>root->data)
        root->right=insertNode(root->right,value);
    return root;
}

//Helper function to find the minimum node(used in deletion)
struct node* findMin(struct node* root){
	while(root->left!=NULL)
		root=root->left;
	return root;
}
 
//Function to delete a node from BST
struct node* deleteNode(struct node* root, int value) {
    if(root==NULL) 
		return root;
    if(value<root->data)
        root->left=deleteNode(root->left,value);
    else if(value>root->data)
        root->right=deleteNode(root->right,value);
    else {
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        // Node with two children
        struct node* temp=findMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}

//Function to search for a given key in BST
struct node* searchNode(struct node* root,int key) {
    if(root==NULL||root->data==key)
        return root;
    if(key<root->data)
        return searchNode(root->left,key);
    else
        return searchNode(root->right,key);
}

//Traversals
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

//Function to find height of BST
int height(struct node* root){
    if(root==NULL) return -1; // height of empty tree is -1
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    return (leftHeight>rightHeight?leftHeight:rightHeight)+1;
}

//Function to print BST sideways
void printTree(struct node* root,int space){
	int i;
    if(root==NULL)return;
    // Increase distance between levels
    space+=5;
    //Print right child first
    printTree(root->right,space);
    // Print current node after spaces
    printf("\n");
    for(i=5;i<space;i++)
        printf(" ");
    printf("%d\n",root->data);
    // Print left child
    printTree(root->left,space);
}

//Main Function
int main(){
    struct node* root=NULL;
    int choice,value;
    while(1){
        printf("\n--- Binary Search Tree MENU ---\n");
        printf("1.Insert Node\n2.Delete Node\n3.Search Node\n4.Inorder Traversal\n5.Preorder Traversal\n6.Postorder Traversal\n7.Height of Tree\n8.Print Tree Structure\n9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter value to insert: ");
                scanf("%d",&value);
                root=insertNode(root,value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d",&value);
                root=deleteNode(root,value);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d",&value);
                if(searchNode(root,value))
                    printf("%d Found in BST\n",value);
                else
                    printf("%d Not Found in BST\n",value);
                break;
            case 4:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 5:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 6:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 7:
                printf("Height of BST is : %d\n",height(root));
                break;
            case 8:
    			printf("Tree structure:\n");
    			printTree(root, 0);
    			break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice! Try Again:(\n");
        }
    }
    return 0;
}
*/







































































