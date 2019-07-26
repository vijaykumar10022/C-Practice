#include <stdio.h>

int main(int argc, char **argv)
{
	int size,i;
	scanf("%d",&size);
	int array1[size],array2[size];
	int array3[size*2];
	for( i=0;i<=size-1;i++){
		scanf("%d",&array1[i]);
	}
	for( i=0;i<=size-1;i++){
		scanf("%d",&array2[i]);
	}
	for(i=0;i<(size*2);i++){
		array3[i]=array1[i];
		array3[size+1]=array2[i];
	}
	for(i=0;i<=size*2;i++){
		printf("%d ",array3[i]); 
	}
	
	return 0;
}

