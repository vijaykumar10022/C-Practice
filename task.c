#include <stdio.h>
int main(int argc, char **argv)
{
	printf("Enter a number to display tables upto range :");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		for(int j=1;j<=n;j++){
			printf("%d * %d =%d\t",j,i,i*j);
		}
		printf("\n");
	}
	
	return 0;
}

/*1*1=1		2*1=2	...............10*1=10
 * 1*2=2	2*2=4					10*2=10
 * 1*3=3	2*3=6					.
 * ....		.	.					.
 * .		.						.
 * .		.						.
 * .		.						.
 * .		.						.
 * 1*10=10	2*10=20					10*10=100*/
