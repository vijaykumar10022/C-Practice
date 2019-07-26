#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void print();
void Insert(int data,int n);
void Delete(int n);
void Insert(int data,int n)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp->next = NULL;
	if(n == 1){
		temp1->next =head ;
		head = temp1;
	}
}

int main()
{
	head = NULL ;
	Insert(2,1);
	Insert(3,1);
	Insert(4,1);
	Insert(5,2);
	print();
	
	//~ head = NULL ;
	//~ Insert(2);
	//~ Insert(4);
	//~ Insert(6);
	//~ Insert(5);
	//~ print();
	//~ int n;
	//~ printf("Enter a position \n");
	//~ scanf("%d",&n);
	//~ Delete(n);
	//~ print();
	
}
void Delete(int n)
{
	struct Node* temp1 = head;
	if(n == 1){
		head = temp1->next;
		free(temp1);
	}
	int i;
	for(i=0;i<n-2;i++){
		temp1= temp1->next;
		struct Node* temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}
		
	
	
	
}
	
