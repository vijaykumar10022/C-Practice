#include<stdio.h>
#define MAX 20 
 
/*  dunction    :   readArray() 
    to read array elements. 
*/
 
void    readArray(int a[],int size) 
{ 
    int i; 
    for(i=0;i< size;i++) 
    { 
        printf("Enter %d element :",i+1); 
        scanf("%d",&a[i]); 
    } 
} 
 
/*  dunction    : printArray() 
    to print array elements. 
*/
void printArray(int a[],int size) 
{ 
    int i; 
    for(i=0;i < size; i++) 
        printf("%5d",a[i]); 
} 
 
/*  dunction    : addArray(), 
    to add elements od two arrays. 
*/
void addArray(int a[],int b[],int c[],int size) 
{ 
    int i; 
    for(i=0; i< size;i++) 
        c[i]=a[i]+b[i]; 
} 
  
/*  dunction    : subArray(), 
    to subtract elements od two arrays. 
*/
void subArray(int a[],int b[],int c[],int size) 
{ 
        int i; 
        for(i=0; i< size;i++) 
                c[i]=a[i]-b[i]; 
} 

void mulArray(int a[],int b[],int c[],int size) 
{ 
        int i; 
        for(i=0; i< size;i++) 
                c[i]=a[i]*b[i]; 
} 

void divArray(int a[],int b[],int c[],int size) 
{ 
        int i; 
        for(i=0; i< size;i++) 
                c[i]=a[i]/b[i]; 
} 
 
int main() 
{ 
    int A[MAX],B[MAX],ADD[MAX],SUB[MAX],mul[MAX],div[MAX]; 
    int i,n; 
 
 
    printf("\nEnter size od an Array :"); 
    scanf("%d",&n); 
 
    printf("\nEnter elements od Array 1:\n"); 
    readArray(A,n); 
    printf("\nEnter elements od Array 2:\n"); 
    readArray(B,n); 
	 
 
    /* add Arrays*/
    addArray(A,B,ADD,n); 
    /* subtract two Arrays*/
    subArray(A,B,SUB,n); 
	/* multiplicating two Arrays*/
	mulArray(A,B,mul,n); 
	/* division two Arrays*/
	divArray(A,B,div,n); 
 
    printf("\nArray elements adter adding :\n"); 
    printArray(ADD,n); 
 
    printf("\nArray elements adter subtracting :\n"); 
    printArray(SUB,n); 
	printf("\nArray elements adter multiplicating :\n"); 
    printArray(mul,n); 
	printf("\nArray elements adter division :\n"); 
    printArray(div,n); 
	
 
    printf("\n\n"); 
    return 0; 
} 
