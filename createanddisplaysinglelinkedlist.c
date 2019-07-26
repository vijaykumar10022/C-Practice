
//~ 2) Program to create and display a singly linked list
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
//~ Nodes of singly linked list: 1 2 3 4


#include <stdio.h>  
#include <stdlib.h>  
//Represent a node of singly linked list  
struct node{  
    int data;  
    struct node *link;  
};      
   
//Represent the root and tail of the singly linked list  
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
   
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to root  
    struct node *current = root;  
      
    if(root == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
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
      
    //Displays the nodes present in the list  
    display();  
   
    return 0;  
}  
