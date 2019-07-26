//5 7 8 9 2 1 4 3
  //~ 0 1 2 3 4 5 6 7
  //~ 
 //~ s=9 -->3
#include<stdio.h>
void read_array(int a[],int s){
		for(int i=0;i<=s-1;i++){
			scanf("%d",&a[i]);
		}
}
void display(int a[],int s){
		for(int i=0;i<=s-1;i++){
			printf("%d ",a[i]);
		}
}
void searchig_ele(int a[],int size,int se)
{
	int i,t=0;
		for(i=0;i<=size-1;i++){
			if(a[i]==se){
				t++;
				break;
			}
		}
	if(t==0){
		printf("Value not found\n");
	}
	else
		printf("Searching element is %d found at position %d\n",se,i);
}
int main(){
	int size;
	scanf("%d",&size);
	int array[size];
	read_array(array,size);
	display(array,size);
	printf("\nEnter Your Seaching Value");
	int search;
	scanf("%d",&search);
	searchig_ele(array,size,search);		
return 0;	
}
