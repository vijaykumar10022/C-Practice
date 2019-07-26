#include <stdio.h>

int main(int argc, char **argv)
{
	int n,reverse;
	scanf("%d",&n);
	for(int i=0;n!=0;i++)
	{
		reverse=(reverse*10)+n%10;
		n=n/10;
		
	}
printf("%d\n",reverse);
//~ //printf("%d",n);
	//~ 1234
	//~ r=(12340)+1234
		//~ 12340
		 //~ 1234
		//~ -----
	    //~ 13574
	//~ n=1234/10=123
	//~ r=(1230+123)
		//~ 1230
		 //~ 123
	//~ ---------
	    //~ 1353
	 //~ n=12
	//~ r=120+12
	  //~ 120
	   //~ 12
	   //~ ---
	   //~ 132
	 //~ n=1
	 //~ r=10+1=11
	 //~ n=1/10
	 //~ 
	return 0;
}

