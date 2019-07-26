#include<stdio.h> 
struct results
{
	int add,sub,mul;
	float div;
	
	
};
struct results mathsop(int a,int b) {

	struct results res;
	res.add = a+b;
	res.sub = a-b;
	res.mul = a*b;
	res.div = a/b;
	return res;
	
	
}	

int main(int args,char *argv[]){
	
	struct results res ;
		int a,b;
		printf("Entter Two Values");
		scanf("%d%d",&a,&b);
		res=mathsop(a,b);
		printf("%d + %d is  %d \n",a,b,res.add);
		printf("%d - %d is  %d \n",a,b,res.sub);
		printf("%d * %d is  %d \n",a,b,res.mul);
		printf("%d / %d is  %f \n",a,b,res.div);
		 return 0;

}
