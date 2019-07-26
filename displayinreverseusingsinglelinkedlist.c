//~ 4) Program to create a singly linked list of n nodes and display it in reverse order
//~ 
//~ 
//~ Input:
//~ 
//~ #Add nodes to the list
//~ sList.addNode(1);
//~ sList.addNode(2);
//~ sList.addNode(3);
//~ sList.addNode(4);
//~ Output:
//~ 
//~ Original List: 1 2 3 4
//~ Reversed List: 4 3 2 1
#include <stdio.h>  
   
//Represent a node of the singly linked list  
struct node{  
    int data;  
    struct node *link;  
};      
   
//Represent the root and temp of the singly linked list  
struct node *root, *temp = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->link = NULL;  
      
    //Checks if the list is empty  
    if(root == NULL) {  
        //If list is empty, both root and temp will point to new node  
        root = newNode;  
        temp = newNode;  
    }  
    else {  
        //newNode will be added after temp such that temp's link will point to newNode  
        temp->link = newNode;  
        //newNode will become new temp of the list  
        temp = newNode;  
    }  
}  
   
//reverse() will the reverse the order of the list  
void reverse(struct node *current) {  
    //Checks if list is empty  
    if(root == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    else{  
        //Checks if the link node is null, if yes then prints it.  
        //Checks if the link node is null, if yes then prints it.  
        //Checks if the link node is null, if yes then prints it.  
        if(current->link == NULL) {  
            printf("%d ", current->data);  
            return;  
        }  
        //Recursively calls the reverse function  
        reverse(current->link);  
        printf("%d ", current->data);  
    }  
}  
      
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to root  
    struct node *current = root;  
      
    if(root == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->link;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    //Add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
      
    printf("Original List: \n");  
    display();  
      
    printf("Reversed List: \n");  
    //Print reversed list  
    reverse(root);  
   
    return 0;  
}  


