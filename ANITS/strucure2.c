#include<stdio.h>
struct Point 
{ 
	int x[10]; 
}; 

int main() 
{ 
	// Create an array of structures 
	struct Point arr[10]; 

	// Access array members 
	for(int i=0;i<=10;i++){
		scanf("%d",&arr[i].x[i]);
	}
	for(int i=0;i<=10;i++){
		printf("%d",arr[i].x[i]);
	}
	
return 0; 
} 
