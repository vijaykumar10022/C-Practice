//(a+b)^2=a^2+b^2+2ab;
//(10+20)^2=10^2+20^2+2*10*20
			//100 +400+400-->900
//~ input:10 20
//~ output:460
#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Enter A and B value :");
	scanf("%d%d",&a,&b);//10 20
	printf("(%d+%d)^2=%d\n",a,b,(a*a)+(b*b)+(2*a*b));
	return 0;
}
