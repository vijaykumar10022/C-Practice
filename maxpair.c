#include<stdio.h>
int main()
{
 	long long int temp,fbig,sbig; 
 	int i,n;
 	scanf("%d",&n);					
 	long long int a[n];				//a[6]
 	
 	for(i=0;i<n;i++)
	{
		scanf("%lld ",&a[i]);			// a[]={5,6,9,7,9,7,8}
	}
 	fbig=a[0];							//fbig=a[0]=5
 	sbig=a[1];							//sbig=a[1]=6
 	if(sbig>fbig)					// if it is true swap together
	{
		 temp=sbig;
		 sbig=fbig;                         
		 fbig=temp;
	}								//after swaping fbig=a[0]=6 sbig=a[1]=5
 	for(i=2;i<n;i++)				//comparing fbig and sbig to all elements in array
	{
		if(a[i]>= fbig)
		{
			 sbig=fbig;
			 fbig=a[i];
		}
		else if(a[i]>sbig)
		 {
			sbig=a[i];
		 }
	 }
		printf("fbig is : %lld and sbig is : %lld \n",fbig,sbig);
 		printf("%lld",fbig*sbig);
		printf("\n");
return 0;
}
