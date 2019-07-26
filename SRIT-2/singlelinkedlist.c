#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node* link;
};
struct node* root=NULL;
void insert(){
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter  your node data:");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(root==NULL){
			root=temp;
		}
		else{
			struct node* p;
			p=root;
			while(p->link!=NULL){
				p=p->link;
			}
			p->link=temp;
		}
		printf("Data inserted Sucessfully..!!\n");
}
void Delete(){
	struct node* p2,*p3;
		p2=root;
		if(p2==NULL){
			printf("No elements in list\n");
		}
		else{
			while(p2->link!=NULL){
				p3=p2;
				p2=p2->link;
			}
			p3->link=NULL;
			free(p2);
		}
		printf("Data deleted Sucessfully..!!\n");
}
}
void Display(){
	struct node* p;
	p=root;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->link;
	}
}
int main(){
	
	while(1){
		int option;
	printf("\n1.Insert \n2.Delete \n3.Display\n4.Exit\n");
	printf("Enter Your Option");
	scanf("%d",&option);
		switch(option){
			case 1:insert();
					break;
			case 2:Delete();
					break;
			case 3:Display();
					break;
			case 4:exit(0);
					break;
			default:printf("Invalid Option");
		}
	}
	return 0;
}
