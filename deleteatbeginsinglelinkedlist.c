//~ 5) Program to delete a new node from the beginning of the singly linked list
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
//~ Updated List: 2 3 4
//~ Updated List: 3 4
//~ Updated List: 4
//~ Updated List: List is empty
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
   
//deleteFromStart() will delete a node from the beginning of the list  
void deleteFromStart() {  
      
    //Checks if the list is empty  
    if(root == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    else {  
        //Checks whether the list contains only one node  
        //If not, the root will point to link node in the list and temp will point to the new root.  
        if(root != temp) {  
            root = root->link;  
        }  
        //If the list contains only one node   
        //then, it will remove it and both root and temp will point to NULL  
        else {  
            root = temp = NULL;  
        }  
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
    //Adds data to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
      
    //Printing original list  
    printf("Original List: \n");  
    display();  
      
    while(root != NULL) {  
        deleteFromStart();  
        //Printing updated list  
        printf("Updated List: \n");  
        display();  
    }  
   
    return 0;  
}  

