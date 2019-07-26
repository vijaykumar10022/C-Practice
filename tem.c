//#include<stdio.h>
#include "tem.h"
int main(){
	int i,j;
	/*int a[5]={10,12,13,14,15};
	//printf("%d %d\n ",&a[0],a);
	//printf("%d %d\n",*a,a[0]);
	//printf("%d %d\n",*(a+1),a[1]);
	//printf("%d %d\n",*(a+2),a[2]);
	//printf("%d %d\n",*(a+3),a[3]);
	//printf("%d %d\n",*(a+4),a[4]);
	for(int i=0;i<5;i++){
		printf("%d %d\n",a[i],*(a+i));
	}
		
		int *par;
		par = a;
		
		
		for(int i=0;i<5;i++){
		printf("%d %d\n",*(par+i),par[i]);
		}
		int *p1;
		 int *p2;
		p1=a;
		p2=&a[3];//a+4
		//printf("%d \n",p2-p1);*/
		
		int ar1[2][3]= {{1,2,3}, {4,5,6}};
		int (*ptr)[3];
		ptr = ar1;
		for(i=0;i<2;i++)
		{
		   for(j=0;j<3;j++)
		       printf("%d ",*(*(ptr+i)+j));
		       printf("\n");
		   }
	return 0;

}
