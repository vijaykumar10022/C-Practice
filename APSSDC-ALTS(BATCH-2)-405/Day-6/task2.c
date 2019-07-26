//~ 2).
   //~ input:7
   //~ input:8 7 4 5 3 6 9--a
   //~ input:7 4 5 3 2 1 4--b
   //~ output:15 11 9 8 5 7 13--c Addition

//~ 1).7
//~ 2).read a array values
//~ 3).read b array values
//~ 4).add_print
#include<stdio.h>
void read_array(int a[],int size){//reading values
	for(int i=0;i<=size-1;i++){
		scanf("%d",&a[i]);
	}
}
void add_array(int a[],int b[],int c[],int s){//adding two arrays 
	for(int i=0;i<=s-1;i++){//1 2 3 4 5    4 5 6 7 8 
							//5 7 9 11 13
			c[i]=a[i]+b[i];
	}
}
void print(int c[],int s){
	for(int i=0;i<=s-1;i++){
		printf("%d ",c[i]);
	}
}
int main(){
	int size;
	scanf("%d",&size);//reading size
	int a[size],b[size];//allocating memory
	read_array(a,size);//reading a array
	read_array(b,size);//redaing b array
	int c[size+size];
	add_array(a,b,c,size);//adding & printing a&b array
	print(c,size);
	return 0;
}





