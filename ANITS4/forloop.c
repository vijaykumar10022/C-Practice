//~ input:10 80
//~ output:1).3161265210
	   //~ 2).3161265211
	   //~ 3).3161265212
	   //~ 4).3161265213
		//~ 
		//~ 
	  //~ 70).3161265280

	   
#include<stdio.h>
int main()
{
	int i,no1,j;
	scanf("%d",&no1);
	for(i=1,j=no1;i<=10;i=i+1,j=j+no1)
	{
		printf("%d*%d= %d\n",no1,i,j);
	}
	return 0;
}

