#include<stdio.h>
int main()
{
	unsigned int i=500;
	while(i++!=0);
	
	printf("%d",i);
	return 0;	
}

//~ input:5 5
//~ output:
//~ abcde
//~ abcde
//~ abcde
//~ abcde
//~ abcde
//~ 2nd program
//~ 
//~ input: 5 5
//~ output:
//~ abcde
//~ bcdef
//~ cdefg
//~ defgh
//~ efghi
//~ 
//~ 
//~ logic:
//~ for(i=0;i<m;i++)
//~ {
	//~ for(j=65;j<65+n;j++)
	//~ {
		//~ printf("%c",(i+j));
	//~ }
	//~ printf("\n");
//~ }
//~ i=0	m=5  n=5
	//~ j=65 j<70
		//~ 65 66 67 68 69
//~ i=1 m=5 n=5
	//~ j=65 j<70
		//~ 66 67 68 69 70
		//~ .
		//~ .
//~ i=4 m=5 n=5
//~ j=65 j<70
		//~ 69 70 71 72 73
		//~ 
//~ output: ABCDE
		//~ BCDEF 
		//~ CDEFG
		//~ DEFGH
		//~ EFGHI
//~ 
//~ 


//~ Input:2
//~ Output:
		//~ 1 1 2
		//~ 2 2 4
		//~ 3 3
		//~ 
//~ Input: 3
//~ Output:
//~ 
		//~ *   *
		  //~ *
		//~ *   *
//~ Input:4 			Input:5
//~ Output:				Output:
		//~ *  *		 *   *
		 //~ **			  * *
		 //~ **		       *
		//~ *  *		  * *
					 //~ *   *
