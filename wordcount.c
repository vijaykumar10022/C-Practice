#include<stdio.h>
int i=0,count=0;
void count_words(char arr[50],int size)
{	if(*(arr+i)!= '\0')
	{	
			label:
			for(int m=i-1;m>=0;m--)
			{	if(*(arr+i)==*(arr+m))
				{	i++;
	 				goto label ;
				}
			}	
			for(int k=i;k<size;k++)
			{	if(*(arr+i)==*(arr+k))	
					count++;
			}
			printf("%c count is = %d\n",*(arr+i++),count);
			count=0;
			
			 count_words(arr,size);
		}
}			 
					
int  main ()
{ 	int n;
	char a[50];
	printf("enter string size ");
	scanf("%d",&n);
	scanf("%s",a);
	count_words(a,n);
return 0 ;
}
