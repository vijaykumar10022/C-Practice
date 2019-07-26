#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void display()
{
    struct node *temp2;
    temp2 = root;
    if (temp2 == NULL)
    {
        printf("List empty to display \n");
    }
    printf("\n Linked list elements from begining : \n");

    while (temp2->right != NULL)
    {
        printf(" %d ", temp2->data);
        temp2 = temp2->right;
    }
    printf(" %d ", temp2->data);
}
void push()
{
    struct node *temp,*temp2;
    temp=(struct node *)malloc(sizeof(struct node));
    temp2=(struct node *)malloc(sizeof(struct node));
     if(root==NULL)
    {
        root=temp;
        printf("enter data");
        scanf("%d",&temp->data);
        temp->left=NULL;
        temp->right=NULL;
    }
    
   else 
    {
        temp=root;
        root=temp2;
        temp2->left=NULL;
        printf("enter element to push \n");                                                                                                                                                                                                                                                                                                                          
        scanf("%d",&temp2->data);
        temp2->right=temp;
        temp->left=temp2;       
   }
}
void pop()
{
	struct node *temp2,*temp;
	temp=temp2 = root;
	if(root==NULL)
	{
		printf("pop not possible its empty \n");
	}
	else if(temp->right!=NULL)
     {
        
        temp2=temp->right;
        temp2->left=NULL;
        
        root=temp2;
        free(temp);
     }
     else
     {
		 temp=root;
		 free(temp);
		 root=NULL;
	 }
     
 }
int length()
{
    int count=0;
    struct node *temp;
    if(root==NULL)
    {
        printf("double linked list is empty\n");
    }

    temp=root;
    while(temp !=NULL)
    {
        temp=temp->right;
        count++;
    }

    printf("total count is %d \n",count);
    return count;
}
int main()
{
    int nb;
	do{
		printf("Enter your ListNumber: \n 1.push \n 2.pop \n 3.display \n 4.length \n 5.exit \n");
		scanf("%d",&nb);
		switch(nb)
		{
			
			case 1: push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:length();break;
			case 5: exit(0);break;

			default:
				printf("You have selected incorrect List\n");
				break;
		}
	} while(1);

}
