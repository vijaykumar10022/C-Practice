#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,n,c;
    char option;
    do
    {
		printf("\nwhat operation do you to do?\n");
		printf("press 1 for add\n");
		printf("press 2 for sub\n");
		printf("press 3 for mul\n");
		printf("press 4 for div\n");
		scanf("%d",&n);
		printf("please enter a number\n");
		scanf("%d",&a);
		printf("please enter a second number\n");
		scanf("%d",&b);
		switch(n)
		{
		   case 1: c=a+b;
				   printf("add of two number is %d",c);
				   break;
		   case 2:c=a-b;
				  printf("sub of two number is %d",c);
				  break;
		   case 3:c=a*b;
				 printf("mul of two number is %d",c);
				 break;
		   case 4:c=a/b;
				 printf("div of two number is %d",c);
				 break;   
		   default:printf("wrong input");                            
		}
			printf("\ndo you want to continue y/n \n");  
			option=getche();
	}while(option=='y');
	getch();
 return 0;
}
