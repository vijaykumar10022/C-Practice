//~ Inner Loops:
//~ Input: 3
//~ Output: 
		//~ * * *
		//~ * * *
		//~ * * *
 //~ A B C D E
 //~ F G H I J
 //~ K L M N O
 //~ P Q ...
 //~ ........
 //~ input:5
 //~ output:
		//~ * * * * *
		//~ *       *
		//~ *       *
		//~ *       *
		//~ * * * * *
		//~ 
//~ input:5
//~ output:    *   
           //~ *
       //~ * * * * *   
           //~ *
           //~ *
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n%2==0){
		printf("%d  is  not Apllicable for this pattern",n);
	}
	else
	{
		int k=1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%.3d ",k);
				k++;
			}
			printf("\n");
		}
	}
	return 0;
}


//~ n=5
//~ 
//~ *
//~ **
//~ ***
//~ ****
//~ *****                           
//~ 

n=3                           n=5
* *                     *    *
 *                       *  *
* *                        *
                         *  *
                        *    *


//~ input:5
//~ output:
//~ 1
//~ 12
//~ 123
//~ 1234
//~ 12345
 //~ 1
 //~ 2 3
 //~ 4 5 6
 //~ 7 8 910
//~ 11121314
//~ Task:
//~ 1
//~ 23
//~ 654
//~ 10987
//~ 14131211
//~ Task:
//~ 01
//~ 03 02
//~ 04 05 06
//~ 10 09 08 07
//~ 11 12 13 14
















