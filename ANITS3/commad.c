//~ input:5
//~ output:5*4*3*2*1-->120
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)//1 2 3 4 5 67 89
{
	int sum=0;
	for(int i=1;i<argc;i++){
		sum=sum+atoi(argv[i]);
		//printf("%d ",atoi(argv[i]));
	}
	printf("Sum is %d",sum);
	
	//printf("%d",t);
	return 0;
}
