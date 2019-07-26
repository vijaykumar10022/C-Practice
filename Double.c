#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;


void insert()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data of node:");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		temp->left=p;
		p->right=temp;
	}
}

void delete()
{
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("List is empty");
	}
	else
	{
		struct node *p;
		p=root->right;
		while(p->right!=NULL)
		{
			p=p->right;
			temp=temp->right;
		}
		p->left=NULL;
		temp->right=NULL;
		free(p);
	}
}

void display()
{
	struct node *temp;
	temp=root;
	if(temp==NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("Linked list elements from begining:");
		while(temp->right!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->right;
		}
		printf("%d",temp->data);
	}
}


void deatp()
{
	struct node *temp;
	struct node *temp2;
	temp=root;
	if(temp->right!=NULL)
	{
		temp2=temp->right;
		temp2->left=NULL;
		temp->right=NULL;
		root=temp2;
		printf("%d is deleted from the list\n",temp->data);
		free(temp);
	}
	else
	{
		free(temp);
	}
}

void inatanp()
{
    struct node *temp,*p,*q;
    int pos;
    p=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter node");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    printf("enter the position to insert");
    scanf("%d",&pos);
    if(pos>sizeof(struct node))
    {
        printf("insertion not possible");
    }
    else if(pos==1)
    {
        temp->right=p;
        root=temp;
        p->left=temp;

    }
    else
    {
        int i=1;
        q=root;
        p=root->right;
        while(i<pos-1)
        {
            p=p->right;
            q=q->right;
            i++;
        }
        temp->left=p->left;
        temp->right=q->right;
        q->right=temp;
        p->left=temp;
    }
}

int main()
{
	do{
		int ch;
		printf("\n Enter your choice:\n 1.Insert\n 2.Delete\n 3.Display\n 4.Deletion at any point\n 5.Insertion at any position\n 6.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			case 4: deatp();break;
			case 5: inatanp();break;
			case 6: exit(0);break;
			default:
			printf("Please select the correct choice");
		}
	}while(1);
	return 0;
}
