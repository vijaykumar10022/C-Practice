#include<stdio.h> 

int  * mathsop(int a,int b) {

	static int res[4];
	res[0] =a+b;
	res[1] =a-b;
	res[2] =a*b;
	res[3] = a / b;
	return res;
}	

int main(int args,char *argv[]){
		int a,b;
		int *res;
		printf("Entter Two Values");
		scanf("%d%d",&a,&b);
		res=mathsop(a,b);
		printf("%d + %d =  %d \n",a,b,res[0]);
		printf("%d - %d =  %d \n",a,b,res[1]);
		printf("%d * %d =  %d \n",a,b,res[2]);
		printf("%d / %d = %d \n",a,b,res[3]);
		 return 0;

}
