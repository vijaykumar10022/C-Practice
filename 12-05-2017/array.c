//~ Arrays:
//~ -------
//~ one dimensional array syntax:
//~ ----------------------------
//~ data type arrayname[size];
//~ 
//~ 
//~ datatype arrayname[size][size]
//~ 
//~ 
//~ 
//~ int a[10];
//~ 
//~ 
//~ 
//~ 
//~ 
//~ 
//~ 
//~ 
//~ 
//~ 



#include<stdio.h>
int main()
{
	    int size,i;
	    scanf("%d",&size);
	    int vignan[size];
	    for(i=0;i<size;i++)
	    {
			scanf("%d",&vignan[i]);
		}
		for(i=0;i<size;i++)
		{
			printf("%d ",vignan[i]);
		}
		return 0;
}
//5
//-9  4 8 22 -2








