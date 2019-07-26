//~ input:6  
	  //~ 1 2 3 4 5 6
//~ output:2 1 4 3 6
#include<stdio.h>
void read_array(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			scanf("%d",&a[i]);
		}
}
void display(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			printf("%d ",a[i]);
		}
}
void oddeven_exchange(int a[],int a2[],int s){
		//1 2 3 4 56
		int i,t=0;
		for(i=0;i<=s-1;i++){
			if(a[i]%2==0){
				a2[t]=a[i];
				t++;
			}
			else
			{
				a2[t]=a[i];
				t++;
			}
		}
		

}
int main(){
	int size;
	scanf("%d",&size);
	int array[size],array2[size];
	read_array(array,size);
	display(array,size);
	oddeven_exchange(array,array2,size);
	printf("\n");
	display(array2,size);
	
return 0;	
}
