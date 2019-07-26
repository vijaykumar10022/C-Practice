#include<stdio.h>
int main(){
	int counter;
	for(counter = 1;counter<=10;counter++){
		//if(counter == 2)
		if((counter%2)!=0) 
		continue;
		printf("%d\n",counter);
		
		}
	
}
