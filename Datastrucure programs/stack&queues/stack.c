#include <stdio.h>
#define max 20
int arr[max];
int top = -1;
void push(int item)
{
  if(top==max-1) { 
		printf("Error: stack overflow\n");
		return;
	}
	arr[++top] = item;
}
void display(){
	int i;
	if(top==-1){
		printf("The stack is emty");
	}
	else
	{
		printf("\nArray Elements are:");
		for(i=top;i>=0;i--){
			printf("%d\t",arr[i]);
		}
	}
	
}
void pop(){
	if(top==-1){
		printf("Stack is empty");
	}
	else {
		top=top-1;
	}
}
int main()
{
	int item;
	printf("Enter Your Item");
	scanf("%d",&item);
	push(item);
	printf("Enter Your Item");
	scanf("%d",&item);
	push(item);
	printf("Enter Your Item");
	scanf("%d",&item);
	push(item);
	printf("Enter Your Item");
	scanf("%d",&item);
	push(item);
	display();
	printf("After Deleted item\n");
	pop();
	display();
	return 0;
}

