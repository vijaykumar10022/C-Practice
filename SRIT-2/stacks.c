//stack implementation 
   /*-->1).Push
	 -->2).POP
	 -->3).Traverse*/
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int size,int stack[])
{
		if(top==size-1)
		{
			printf("Stack is full");
		}
		else
		{
			int ele;
			printf("Enter element");
			scanf("%d",&ele);
			top++;
			stack[top]=ele;
		}
}
void pop(int stack[])
{
		if(top==-1)
		{
			printf("Stack is empty");
		}
		else
		{
			printf("%d is deleted",stack[top]);
			top--;
		}
}
void traverse(int stack[])
{
		if(top==-1)
		{
			printf("Stack is empty");
		}
		else
		{
			for(int i=top;i>=0;i--)
			{
				printf("%d ",stack[i]);
			}
		}
}
int main(){
	int size;
	printf("Enter Size:");
	scanf("%d",&size);
	int stack[size];
	int choice;
	do{
		printf("Choose your option \n1.PUSH\n2.POP\n3.Traverse\n4.Exit\n ");
		scanf("%d",&choice);
		switch(choice){
			case 1:push(size,stack);
					break;
			case 2:pop(stack);
					break;
			case 3:traverse(stack);
					break;
			case 4:exit(0);
					break;
			default:printf("Choose from 1-4");
		}
	}while(choice!=4);
	return 0;
}
