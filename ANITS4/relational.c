//4).Assignment operators-->+=,-=,*=,/=,%=
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//10 90
	//a=a+b;
	a+=b;//a=10+90 a=100
	printf("%d\n",a);
	a/=b;
	//a=a-b;a=100-90 a=10
	printf("%d\n",a);
	a*=b;//a=a*b; a=10*90 a=900
	printf("%d\n",a);
	a-=b;
	//a=a/b;a=900/90-->10
	printf("%d\n",a);
	a%=b;//a=a%b;a=10%90-->10
	printf("%d\n",a);
	
return 0;	
}
