//~ 10).input:2
  //~ input:7
  //~ input:7 1 4 5 3 6 8
  //~ input:8 4 5 1 2 3 6
  //~ output:8 7 6 5 4 3 1 8 6 5 4 3 2 1
//Funtion with arguments with out return valu  
 #include<stdio.h>
 void read_array(int a[],int s){
	printf("Enter %d values in array:",s);
	for(int i=0;i<=s-1;i++){
		scanf("%d",&a[i]);
	 }
}
void display(int a[],int s){// funtion defination
							//Formal arguments or signatures
	printf("Array Values are:");
	for(int i=0;i<=s-1;i++){
		printf("%d ",a[i]);
	}
}
void sort(int a[],int s){
		for(int i=0;i<=s-1;i++){
			for(int j=i+1;j<=s-1;j++){
				if(a[i]<a[j]){
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
}
//~ a[5]={1,2,3,4,50} ,b[5]={7,8,9,4,5};
		  //~ 50 4 3 2 1         9 8 7 5 4
		  c[10]={0,0,0,0,0,0,0,0,0,0}
//~ c[5+5]={50 4 3 2 1 9 8 7 5 4};
void combine_array(int c[],int a[],int b[],int s){//5
	int i,t=0; 
	for(i=0;i<=s-1;i++){
		c[i]=a[i];
	}
	//c[10]={50 4 3 2 1 0 0 0 0 0}
	       //0  1 2 3 4 5
	for(i=i;i<s+s;i++){
		c[i]=b[t];
		t++;
	}
	//c[10]={50 4 3 2 1 4 888 222 111 }
}

 int main(){
	 int size;
	 printf("Enter Size :");
	 scanf("%d",&size);
	 int array1[size];
	 int array2[size];
	 read_array(array1,size);//Funtion calling--Actual 			  arguments/parameters 
	 read_array(array2,size);
	 printf("Before sortinng \n");
	 display(array1,size);
	 printf("\n");
	 display(array2,size);
	 sort(array1,size);
	 sort(array2,size);
	 printf("\nAfter sorting \n");
	 display(array1,size);
	 printf("\n");
	 display(array2,size);//7
	 int array3[size+size];//7+7-->14
	 combine_array(array3,array1,array2,size);
	 printf("\n");
	 display(array3,size+size);
	return 0;
}
 
