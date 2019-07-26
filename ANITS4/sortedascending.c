/*Sorting an array:-->Ascending and 		Descending order
input:124578971
output:112457789 or 987754211*/
#include <stdio.h>
FILE *array=fopen("input.txt","r");
void read_array(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			fscanf(a[i],"%d",&a[i]);
		}
}
void display(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			printf("%d ",a[i]);
		}
}
void sorting(int a[],int s){
		int i,j;
		for(i=0;i<=s-1;i++){
			for(j=i+1;j<=s-1;j++){
				if(a[i]>=a[j]){
					int t;
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				
			}
		}
}
void posi_display(int a[],int s2,int s3){
	int i;
	for(i=s2;i<=s3-1;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	//FILE *array=fopen("input.txt","r");
	int size,size2,size3;
	
	fscanf(array,"%d",size);
	fscanf(array,"%d",size2);
	fscanf(array,"%d",size3);
	
	//scanf("%d%d%d",&size,&size2,&size3);
	int array[size];
	read_array(array,size);
	printf("before Sorted: ");
	display(array,size);
	sorting(array,size);
	printf("\nafter Sorted: ");
	display(array,size);
	printf("\n");
	posi_display(array,size2,size3);
return 0;	
}


//~ input:8 3 6 
	  //~ 1 7 2 3 4 7 8 9
	  //~ 1 2 3 4 7 7 8 9
//~ output:4 7




