#include<stdio.h> 

char * mathsop(int a,int b) {

	char res[4]={"a+b","a-b","a * b","a / b"};
	
	return res;
}	

int main(int args,char *argv[])
{
		int a,b;
		char *res;
		printf("Entter Two Values");
		scanf("%d%d",&a,&b);
		res=mathsop(a,b);
		printf("%d + %d =  %s \n",a,b,res);
		
		 return res;

}


//use sprintf & sscanf
