#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node* link;
};
struct node* root=NULL;
int len;
void append(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL){//list is empty
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
}
int lenght(){
		int count =0;
		struct node* temp;
		temp=root;
		while(temp!=NULL){
			count++;
			temp=temp->link;
		}
		return count;
}
void display(){
		struct node* temp;
		temp=root;
		if(temp==NULL){
			printf("No elements\n ");
		}
		else{
			while(temp!=NULL){
				printf("%d ",temp->data);
				temp=temp->link;
			}
			printf("\n\n");
		}
}
void delete(){
	struct node* temp,*p;
	temp=root;
	while(temp->link!=NULL)
	{
		p=temp;
		
		temp=temp->link;
	}
	p->link=NULL;
	free(temp);
}
void addafter(){
	struct node* temp,*p;
	int loc,i=1;
	printf("Enter Your Location :");
	scanf("%d",&loc);
	int le=lenght();
	if(loc>le){
		printf("Invalid location\n currently list is having %d nodes",le);
	}
	else{
		p=root;
		while(i<loc){
			p=p->link;
			i++;
		}
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter Your node data");
		scanf("%d",&temp->data);
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
	}	
}
void addatbegin(){
	
}
int main(){
	while(1){
		printf("Single Linked list Operations :\n");
		printf("1.Append\n");
		printf("2.Add at begin\n");
		printf("3.Add At after\n");
		printf("4.Length\n");
		printf("5.Display\n");
		printf("6.Delete\n");
		printf("7.Quit\n");
		printf("Enter Your Choice : ");
		int ch;
		scanf("%d",&ch);
		switch(ch){
			case 1:append();
					break;
			case 2:addatbegin();
					break;
			case 3:addafter();
					break;
			case 4:len=lenght();
					printf("Length Is %d\n",len);
					break;
			case 5:display();
					break;
			case 6:delete();
					break;
			case 7:exit(0);
					break;
			default :printf("Invalid choice");
			
		}
	}
	return 0;
}
