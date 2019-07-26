#include<stdio.h>
struct node
{
	int data;
	struct node* link;
};
	struct node* root=NULL;
void append(){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter Node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct node * p;
		p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
	
}
int  main(){
	
	return 0;
}
