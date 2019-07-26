#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * link;
};
struct node *root=NULL;
void insert(){
	struct node *temp;
	temp =(struct node*)malloc(sizeof(struct node));
	printf("Enter Data");
	scanf("%d",temp->data);
	temp->link=NULL;
	if(root == NULL){
		root=temp;
	}
	else{
		struct node *temp2;
		temp2=root;
		while(temp2->link==NULL){
				temp2->link=temp;
			}
			temp2=temp2->link
		}
	}
void display(){
	struct node *temp;
	temp=root;
	if(temp==NULL){
		printf("No Elements founds\n");
	}
	else{
		while(temp->link!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	temp->link=NULL;
	}

}
void length(){
	struc node *temp;
	int count=0;
	if(root==NULL)
	{
		return 0;
	}
	else{
		while(temp->link!=NULL){
			count=count+1;
		}
		printf("%d",count);
		
	}
	void delete(){
				
	

	
