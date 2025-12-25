//QUESTION 1
//ARRAY
//WAP (menu-driven) TO IMPLEMENT THE FOLLOWING IN AN ARRAY:
/*
1.) Traverse and display elements
2.) Search for an element(Linear search)
3.) Insert an element at any position (start,middle,end)
4.) Delete an element from any position
5.) Exit
*/
/*
#include<stdio.h>
int main(){
	int a[100],i,n,choice,pos,val;
	printf("Enter the number of elements of array : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	while(1){
		printf("ENTER YOUR CHOICE FROM BELOW OPTIONS:-\n");
		printf("1.) Traverse and display elements\n");
		printf("2.) Search for an element(Linear search)\n");
		printf("3.) Insert an element at any position (start,middle,end)\n");
		printf("4.) Delete an element from any position\n");
		printf("5.) Exit\n");
		printf("ENTER : ");
		scanf("%d",&choice);
		printf("\n\n");
		switch(choice){
			case 1: {
				for(i=0;i<n;i++){
					printf("Element %d entered : %d\n",i+1,a[i]);
				}
				printf("\n\n");
				break;
			}
			case 2: {
				int s;
				printf("Enter the element you want to search : ");
				scanf("%d",&s);
				printf("You have entered : %d\n",s);
				int f=0;
				for(i=0;i<n;i++){
					if(a[i]==s){
					printf("Element exists at position %d\n",i+1);
					f=1;
					break;
					}
				}
				if(f!=1){
					printf("Element does not exist.");
				}
				printf("\n\n");
				break;
			}
			case 3: {
				printf("Enter the value which is needed to be inserted in array : ");
				scanf("%d",&val);
				printf("Enter the position to insert value(between 1 and %d) : ",n+1);
				scanf("%d",&pos);	
				for(i=n;i>=pos;i--){
					a[i]=a[i-1];
				}
				a[pos-1]=val;
				n++;
				printf("Desired element inserted\n");
				printf("Updated array:\n");
    	    	for(i=0;i<n;i++){
    	    	    printf("Element %d: %d\n",i+1,a[i]);
  	     		}
  	     		printf("\n\n");
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
        			for(i=pos;i<n-1;i++){
        		    	a[i]=a[i+1];
        			}
        			n--;
        			printf("Desired element deleted\n");
					printf("Updated array:\n");
        			for(i=0;i<n;i++){
        			    printf("Element %d: %d\n",i+1,a[i]);
       				}
				}
				printf("\n\n");
				break;
			}
			case 5: {
				exit(0);
			}
		}
	}
}
*/



//QUESTION 2
//LINKED LIST
//WAP (menu-driven) TO IMPLEMENT A SINGLY LINKED LIST WITH THE FOLLOWING OPERATIONS:
/*
1) Create a node (create list / insert node at the end)
2) Insert a node at the beginning
3) Insert a node at the end
4) Insert a node at a given position
5) Delete a node from the beginning
6) Delete a node from the end
7) Delete a node from a given position
8) Display the linked list
9) Exit
*/
/*
#include<stdio.h>
#include<stdlib.h>
// Structure for a node
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL; 		// Global head pointer
// Function prototypes
void createNode(int value);
void insertAtBeginning(int value);
void insertAtEnd(int value);
void insertAtPosition(int value, int pos);
void deleteFromBeginning();
void deleteFromEnd();
void deleteFromPosition(int pos);
void display();
// Function to create first node or add at end (simple creation)
void createNode(int value){
	struct Node *newNode,*temp;
 	newNode=(struct Node *)malloc(sizeof(struct Node));
 	newNode->data=value;
 	newNode->next=NULL;
 	if(head==NULL){
 		head=newNode;
 	} 
	else{
 		temp=head;
 		while(temp->next!=NULL)
 		temp=temp->next;
 		temp->next=newNode;
 	}
 	printf("Node created successfully!\n");
}
// Insert at beginning
void insertAtBeginning(int value) {
 	struct Node *newNode;
 	newNode=(struct Node *)malloc(sizeof(struct Node));
 	newNode->data=value;
 	newNode->next=head;
 	head=newNode;
 	printf("Node inserted at beginning.\n");
}
// Insert at end
void insertAtEnd(int value){
 	createNode(value); 				// reuse createNode logic
}
// Insert at given position
void insertAtPosition(int value, int pos){
 	struct Node *newNode, *temp;
 	int i;
 	newNode=(struct Node *)malloc(sizeof(struct Node));
 	newNode->data=value;
 	if(pos==1){
 		newNode->next=head;
 		head=newNode;
 		return;
	}
 	temp=head;
 	for(i=1;i<pos-1&&temp!=NULL;i++)
 	temp=temp->next;
 	if(temp==NULL)
	printf("Position out of range!\n");
	else{
 		newNode->next=temp->next;
 		temp->next=newNode;
 		printf("Node inserted at position %d.\n", pos);
 	}
}
// Delete from beginning
void deleteFromBeginning(){
 	struct Node *temp;
 	if(head==NULL){
 		printf("List is empty!\n");
 		return;
 	}
 	temp=head;
 	head=head->next;
 	free(temp);
 	printf("Node deleted from beginning.\n");
}
// Delete from end
void deleteFromEnd() {
 	struct Node *temp,*prev;
 	if(head==NULL){
 		printf("List is empty!\n");
 		return;
 	}
 	if(head->next==NULL){
 		free(head);
 		head=NULL;
 		printf("Last node deleted.\n");
 		return;
 	}
 	temp=head;
 	while(temp->next!=NULL){
 		prev=temp;
 		temp=temp->next;
 	}
 	prev->next=NULL;
 	free(temp);
 	printf("Node deleted from end.\n");
}
// Delete from specific position
void deleteFromPosition(int pos){
 	struct Node *temp,*prev;
 	int i;
 	if(head==NULL){
 		printf("List is empty!\n");
 		return;
 	}
 	temp=head;
 	if(pos==1){
 		head=head->next;
 		free(temp);
 		printf("Node deleted from position 1.\n");
 		return;
 	}
 	for(i=1;i<pos&&temp!=NULL;i++){
 		prev=temp;
 		temp=temp->next;
 	}
 	if(temp==NULL){
 	printf("Position not found!\n");
 	}
	else{
 		prev->next=temp->next;
 		free(temp);
	 	printf("Node deleted from position %d.\n", pos);
 	}
}
// Display list
void display(){
 	struct Node *temp;
 	if(head==NULL){
 		printf("List is empty!\n");
 		return;
 	}
 	printf("Linked List: ");
 	temp=head;
 	while(temp!=NULL){
 		printf("%d -> ",temp->data);
 		temp=temp->next;
 	}
 	printf("NULL\n");
}
// Main function
int main(){
 	int choice,value,pos;
 	while (1) {
 		printf("\n--- Singly Linked List Menu ---\n");
 		printf("1. Create Node\n");
 		printf("2. Insert at Beginning\n");
 		printf("3. Insert at End\n");
 		printf("4. Insert at Position\n");
 		printf("5. Delete from Beginning\n");
 		printf("6. Delete from End\n");
 		printf("7. Delete from Position\n");
 		printf("8. Display\n");
 		printf("9. Exit\n");
 		printf("Enter your choice : ");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:{
 				printf("Enter value : ");
 				scanf("%d",&value);
 				createNode(value);
 				break;
 			}
 			case 2:{
				printf("Enter value : ");
 				scanf("%d",&value);
 				insertAtBeginning(value);
 				break;
 			}
 			case 3:{
				printf("Enter value : ");
 				scanf("%d",&value);
				insertAtEnd(value);
 				break;
 			}
 			case 4:{
				printf("Enter value and position: ");
 				scanf("%d %d", &value, &pos);
 				insertAtPosition(value, pos);
 				break;
 			}
 			case 5:{
				deleteFromBeginning();
 				break;
 			}
 			case 6:{
				deleteFromEnd();
 				break;
 			}
 			case 7:{
 				printf("Enter position to delete : ");
 				scanf("%d",&pos);
 				deleteFromPosition(pos);
 				break;
 			}
			case 8:{
				display();
 				break;
 			}
 			case 9:{
				printf("Exiting program.\n");
 				exit(0);
 			}
 			default:{
 				printf("Invalid choice! Try again.\n");
 			}
 		}
 	}
 	return 0;
}
*/



//QUESTION 3
//STACK
//WAP (menu-driven) TO IMPLEMENT A STACK USING ARRAY WITH FOLLOWING OPERATIONS:
/*
1) push() - insert element into stack
2) pop() - remove an element from the stack
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
void pop();
void peek();
void display();

int isEmpty(){
	if(top==-1)
	return 1;
	else
	return 0;
}

int isFull(){
	if(top==MAXSIZE-1)
	return 1;
	else
	return 0;
}

void push(int data){
	if(!isFull()){
		top=top+1;
		stack[top]=data;
	}
	else{
		printf("Insertion is not possible since stack is full\n");
	}
}

void pop(){
    if(!isEmpty()){
        int del=stack[top];
        top=top-1;
        printf("Popped element : %d\n",del);
    }
    else{
        printf("Removing is not possible since stack is empty\n");
    }
}	

void peek(){
	if(isEmpty()){
        printf("Stack is empty, no top element\n");
    }else{
        printf("Topmost element is : %d\n",stack[top]);
    }
}

void display(){
	int i;
	if(isEmpty()){
		printf("Stack is empty\n");
	}
	else{
		printf("Stack elements are : \n");
		for(i=0;i<=top;i++){
			printf("Element %d : %d\n",i+1,stack[i]);
		}
	}
}

int main(){
	int choice,data,del,i;
	while(1){
		printf("1) push\n2) pop\n3) peek\n4) display\n5) exit\n\n");
		printf("Enter your choice from the above options : ");
		scanf("%d",&choice);
		printf("\n");
		switch(choice){
			case 1 : {
				printf("Enter the element you want to insert : ");
				scanf("%d",&data);
				push(data);
				printf("\n");
				break;
			}
			case 2 : {
				pop();
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
		}
	}
}
*/



//QUESTION 4
//QUEUE
//WAP (menu-driven) TO IMPLEMENT A QUEUE USING ARRAY WITH FOLLOWING OPERATIONS:
/*
1) enqueue() - insert element at the rear
2) dequeue() - remove an element from the front
3) peek() - view the top element without removing it
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

int isEmpty(){
	if(front==-1 || front>rear)
	return 1;
	else
	return 0;
}

int isFull(){
	if(rear==MAXSIZE-1)
	return 1;
	else
	return 0;
}

void enqueue(int data){
	if(isFull()){
		printf("Insertion is not possible since queue is full\n");
	}
	else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=data;
		printf("%d inserted into queue\n",data);
	}
}

void dequeue(){
    if(isEmpty()){
        printf("Removing is not possible since stack is empty\n");
    }
    else{
        printf("%d deleted from queue\n",queue[front]);
        front++;
    }
}	

void peek(){
	if(isEmpty()){
        printf("Queue is empty, no front element\n");
    }else{
        printf("Frontmost element is : %d\n",queue[front]);
    }
}

void display(){
	int i;
	if(isEmpty()){
		printf("Queue is empty\n");
	}
	else{
		printf("Queue elements are : \n");
		for(i=front;i<=rear;i++){
			printf("Element %d : %d\n",i,queue[i]);
		}
	}
}

int main(){
	int choice,data,i;
	while(1){
		printf("1) enqueue\n2) dequeue\n3) peek\n4) display\n5) exit\n\n");
		printf("Enter your choice from the above options : ");
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



//QUESTION 5
//  BINARY SEARCH TREE
/*
Write a C program to implement a binary search tree(BST) with the following operations:-
1.  Insert a node into the BST
2.  Delete a node from the BST
3.  Search for a given key in the BST
4.  Traversal: Inorder, Preorder, Postorder
5.  Find the height of the BST
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
    else{
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

//Main Function
int main(){
    struct node* root=NULL;
    int choice,value;

    while(1){
        printf("\n--- Binary Search Tree MENU ---\n");
        printf("1.Insert Node\n2.Delete Node\n3.Search Node\n4.Inorder Traversal\n5.Preorder Traversal\n6.Postorder Traversal\n7.Height of Tree\n8.Exit\n");
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
                exit(0);

            default:
                printf("Invalid choice! Try Again!\n");
        }
    }
    return 0;
}
*/

//QUESTION 6
// AVL TREE
/*
WAP to implement an AVL Tree (self-balancing BST). The program should support:
1. Insertion of nodes into AVL tree
2. Automatic balancing using rotations:
   - Left Rotation (LL)
   - Right Rotation (RR)
   - Left-Right Rotation (LR)
   - Right-Left Rotation (RL)
3. Inorder traversal to display the tree contents in sorted order
4. Display the balance factor of each node
*/

#include<stdio.h>
#include<stdlib.h>

// Structure of a AVL node
struct node{
    int data,height;
    struct node *left,*right;
};

// Function to create a new node
struct node *createNode(int value){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    newNode->height=1;
    return newNode;
}

// Helper Functions needed before insertion of New Nodes
int max(int a,int b){
    return (a>b)?a:b;
}

int getHeight(struct node *n){
    if(n==NULL) return 0;
    return n->height;
}

int getBalance(struct node *n){
    if(n==NULL) return 0;
    return getHeight(n->left)-getHeight(n->right);
}

// Rotations

// Right Rotation (LL)
struct node* rightRotate(struct node *y){
    struct node *x=y->left;
    struct node *T2=x->right;

    // Perform rotation
    x->right=y;
    y->left=T2;

    // Update heights
    y->height=max(getHeight(y->left),getHeight(y->right))+1;
    x->height=max(getHeight(x->left),getHeight(x->right))+1;

    return x;
}

// Left Rotation (RR)
struct node* leftRotate(struct node *x){
    struct node *y=x->right;
    struct node *T2=y->left;

    // Perform rotation
    y->left=x;
    x->right=T2;

    // Update heights
    x->height=max(getHeight(x->left),getHeight(x->right))+1;
    y->height=max(getHeight(y->left),getHeight(y->right))+1;

    return y;
}

// Function to insert a new node into AVL
struct node* insertNode(struct node* root,int value){
    if(root==NULL)
        return createNode(value);

    if(value<root->data)
        root->left=insertNode(root->left,value);
    else if(value>root->data)
        root->right=insertNode(root->right,value);
    else
        return root;

    // Update height
    root->height=1+max(getHeight(root->left),getHeight(root->right));

    // Get balance factor
    int balance=getBalance(root);

    // Balance cases
    if(balance>1 && value<root->left->data)      // LL
        return rightRotate(root);

    if(balance<-1 && value>root->right->data)    // RR
        return leftRotate(root);

    if(balance>1 && value>root->left->data){     // LR
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }

    if(balance<-1 && value<root->right->data){   // RL
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }

    return root; // Balanced
}

// Function to search for a given key in AVL
struct node* searchNode(struct node* root,int key){
    if(root==NULL || root->data==key)
        return root;
    if(key<root->data)
        return searchNode(root->left,key);
    else
        return searchNode(root->right,key);
}

// Traversal
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

// Function to display balance factor of given AVL tree
void displayBalanceFactors(struct node* root){
    if(root!=NULL){
        displayBalanceFactors(root->left);
        printf("Node %d -> Balance Factor = %d\n",root->data,getBalance(root));
        displayBalanceFactors(root->right);
    }
}

// Main Function
int main(){
    struct node* root=NULL;
    int choice,value;

    while(1){
        printf("\n--- AVL Tree MENU ---\n");
        printf("1.Insert Node\n2.Search Node\n3.Inorder Traversal\n4.Display Balance Factor\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter value to insert: ");
                scanf("%d",&value);
                root=insertNode(root,value);
                break;

            case 2:
                printf("Enter value to search: ");
                scanf("%d",&value);
                if(searchNode(root,value))
                    printf("%d Found in AVL\n",value);
                else
                    printf("%d Not Found in AVL\n",value);
                break;

            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 4:
                printf("Balance Factor is:\n");
                displayBalanceFactors(root);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice! Try Again :(\n");
        }
    }
    return 0;
}






