#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* R;
	struct node* L;
};
struct node* root=NULL;
void insert(){
		struct node* temp;
		temp= (struct node*)malloc(sizeof(struct node));
		printf("Enter Node data:");
		scanf("%d",&temp->data);
		temp->L=NULL;
		temp->R=NULL;
		if(root==NULL){
			root=temp;
		}
		else{
			struct node* p;
			p=root;
			while(p->R!=NULL){
				p=p->R;
			}
			p->R=temp;
			temp->L=p;
		}
}
void Display(){
		struct node* p;
		p=root;
		while(p!=NULL){
			printf("%d ",p->data);
			p=p->R;
		}
		printf("\n");
}
void Delete(){
	
	}
int main(){
	while(1){
		printf("1.Insert\n2).Delete\n3.Display\n4).Exit\n");
		int option;
		printf("Enter Your option:");
		scanf("%d",&option);
		switch(option){
		case 1:insert();
				break;
		case 2:Delete();
				break;
		case 3:Display();
				break;
		case 4:exit(555);
				break;
		default :printf("Invalid option");
		}
	}
	return 0;
}
