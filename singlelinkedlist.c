//~ 1) Singly Linked List Examples
//~
//~ Input:
//~
//~ Head Node = 100
//~ Second Node = 200
//~ Third Node = 300
//~ Output:
//~
//~ 100
//~ 200
//~ 300
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *link;
};
void display(struct Node *n)
{
	while (n != NULL)
	  {
		printf(" %d \n", n->data);
		n = n->link;
	  }
}
int main()
{
	struct Node* root = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	  // allocate 3 nodes in the heap
	root = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	root->data = 100; //assign data in first node
	root->link = second; // Link first node with the second node
	  // assign data to second node
	second->data = 200;
	  // Link second node with the third node
	second->link = third;
	third->data = 300; //assign data to third node
	third->link= NULL;
	display(root);
	return 0;
}
