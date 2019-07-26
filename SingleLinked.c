#include<stdio.h>
#include<stdlib.h>
void append();
struct node
{
	int data;
	struct node* link;	
};
struct node* root = NULL;

void main()
{
	int ch;
	while(1)
	{
		printf("Single Linked List Operation : \n");
		printf("1.Append \n");
		printf("2.Addatbegin \n");
		printf("3.Addatafter \n");
		printf("4.Lengtch \n");
		printf("5.Display \n");
		printf("6.Delete \n");
		printf("7.Quit \n");
		
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: append();
					break;
			//~ case 2: addatbegin();
					//~ break;
			//~ case 3: addatafter();
					//~ break;
			//~ case 4: Lengtch();
					//~ break;
			//~ case 5:Display();
					//~ break;
			//~ case 6:Delete();
					//~ break;
			case 2: exit(0);
			deafault: printf("Invalid input \n\n");
			
		
		}
	
	
	}
	
}
void append()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter node data : \n");
	scanf("%d" , &temp->data);
	temp->link = NULL;
	if(root == NULL) 
	{
		root = temp;		
	}
	else
	{
			struct node* p;
			p = root;
			
			while(p->link !=NULL)
			{
				p = p->link;
				
			}
		p->link =temp;
	}
	
	
}
