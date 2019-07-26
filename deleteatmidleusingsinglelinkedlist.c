//~ 6) Program to delete a new node from the middle of the singly linked list
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
//~ Updated List: 1 3 4
//~ Updated List: 1 4
//~ Updated List: 4
//~ Updated List: List is empty

#include <stdio.h>  
   
//Represent a node of the singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
int size;  
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
    //Size will count the number of nodes present in the list  
    size++;  
}  
   
//deleteFromMid() will delete a node from the middle of the list  
void deleteFromMid() {  
    struct node *temp, *current;  
      
    //Checks if list is empty  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    else {  
        //Store the mid position of the list  
        int count = (size % 2 == 0) ? (size/2) : ((size+1)/2);  
          
        //Checks whether the head is equal to the tail or not, if yes then the list has only one node.  
        if( head != tail ) {  
            //Initially, temp will point to head  
            temp = head;  
            current = NULL;  
              
            //Current will point to node previous to temp  
            //If temp is pointing to node 2 then current will point to node 1.  
            for(int i = 0; i < count-1; i++){  
                current = temp;  
                temp = temp->next;  
            }                  
            if(current != NULL) {  
                //temp is the middle that needs to be removed.  
                //So, current node will point to node next to temp by skipping temp.  
                current->next = temp->next;  
                //Delete temp  
                temp = NULL;  
            }  
            //If current points to NULL then, head and tail will point to node next to temp.  
            else {  
                head = tail = temp->next;  
                //Delete temp  
                temp = NULL;  
            }      
        }  
        //If the list contains only one element   
        //then it will remove it and both head and tail will point to NULL  
        else {  
            head = tail = NULL;  
        }  
    }  
    size--;  
}  
      
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
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
      
    while(head != NULL) {  
        deleteFromMid();  
        //Printing updated list  
        printf("Updated List: \n");  
        display();  
    }  
          
    return 0;  
}  
