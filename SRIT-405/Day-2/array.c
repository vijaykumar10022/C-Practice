#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter size of array:");
	scanf("%d",&size);//size=5
	int arr[size];
	int v=0;
	for(i=0;i<size;i++)
	{	
		if(v%2==0){
			arr[i]=v+1;
			printf("index=%d,value=%d\n",i,arr[i]);
		}
		else{
			arr[i]=v-1;
			printf("index=%d,value=%d\n",i,arr[i]);
		}
		v++;
	}
	return 0;
}
//~ insert:
	//~ 0-index position ,1000-->Adress -->Enter value
//~ display:
	//~ 0-index position ,1000-->Adress --> value=10





//~ a[0]-->1
//~ a[1]-->0
//~ a[2]-->3
//~ a[4]-->2
//~ a[5]-->5
//~ a[6]-->4
