 #include<stdio.h>
 #include<string.h>
 char *mathsop(int a,int b){
	static char re[10];
	sprintf(re,"%d %d",a+b,a-b);
	return re;
 
 
 }
 
 int main(int argc,char *argv[])
   {
	   int a,b;
	   char *re;
	   int add,sub;
	   printf("Enter 2 vlaues");
	   scanf("%d %d",&a,&b);
	   re=mathsop(a,b);
	   sscanf(re,"%d %d",&add,&sub);
	   printf("%d + %d = %d \n",a,b,add);
	   printf("%d - %d = %d \n",a,b,sub);
	   return 0;
	   
       
    }
