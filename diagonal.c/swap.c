#include <stdio.h>
void swap(int *pt1,int *pt2){
	int temp=*pt1;//temp=10
		*pt1=*pt2;//pt1=20
		*pt2=temp;//pt2=10
		
		/*pt1=*pt1+*pt2;//pt1=30
		 * *pt2=*pt1-*pt2;//pt2=30-20=10
		 * *pt1=*pt1-*pt2*///pt1=30-10=20
		printf("after swaping a=%d and b=%d\n",*pt1,*pt2);
}
int main(int argc, char **argv)
{
	int a,b;
	printf("Enter a and b values :");
	scanf("%d%d",&a,&b);
	printf("Before swaping a=%d and b=%d\n",a,b);
	swap(&a,&b);	
	
	return 0;
}

