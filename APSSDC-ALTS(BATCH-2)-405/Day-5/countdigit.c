//~ 6)input:3214-->Count =4
 //~ output:24
       //~ 3*4+2*3+1*2+4*1
       //~ 12+6+2+4-->24
    //~ input:12345 -->count-->5
    //~ output:1*5+2*4+3*3+4*2+5*1->? 
#include<stdio.h>
int main(){
	int n,count=0,rev=0,sum=0;
	scanf("%d",&n);//1234
	while(n!=0){
		rev=rev*10+n%10;//4321
		n=n/10;
		count++;	//4
	}
	printf("Count =%d\n",count);
	printf("Reverse =%d\n",rev);
	while(rev!=0){
		int last=rev%10;
		sum=(last*count)+sum;
		count--;
		rev=rev/10;
	}
	printf("Sum =%d\n",sum);
	return 0;
}

//~ 3214
//~ 3*4+2*3+1*2+4*1-->24
//~ 12+6+2+4-->24



