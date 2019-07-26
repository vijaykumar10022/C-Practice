//Single linked list
#include<stdio.h>
#include<stdlib.h>
//defining a node
struct node 
{
	int data;
	struct node *link;
};
struct node *root=NULL;

//appending a value to a node
void append()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data of the node:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *temp2;
		temp2=root;
		while(temp2->link!=NULL)
		{
			temp2=temp2->link;
		}
		temp2->link=temp;
	}
}
	
//finding the length of a node
int length()
{
	int count=1;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		struct node *temp;
		temp=root;
		while(temp->link!=NULL)
		{
			temp=temp->link;
			count=count+1;
		}
	}
	printf("The length of node is:%d\n",count);
	return 0;
}

//displaying data in the nodes
void display()
{
	struct node *temp;
	temp=root;
	if(temp==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		while(temp->link!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
		printf("%d\n",temp->data);
	}
}

//main function
int main()
{
	int ch;
	do{
		printf("Enter your choice: \n 1.append\n 2.length\n 3.display\n 4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: append();break;
			case 2: length();break;
			case 3: display();break;
			case 4: exit(1);break;
			default:
				printf("You have selected incorrect choice\n");
				break;
		}
	} while(1);
	return 0;
}
	
