//~
//~ i/p:3
//~ o/P:
	//~   1  
	//~ 2   3
	//~   4 

//~ 00 01 02 03 04
//~ 10 11 12 13 14
//~ 20 21 22 23 24
//~ 30 31 32 33 34
//~ 40 41 42 43 44
 
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int d=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%2==0&&j%2==0){
				printf("%02d ",d);
				d++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}	   
