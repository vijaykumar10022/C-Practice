//input : 1401601499
//output: legal
//  1*1+4*2+0*3+1*4+6*5+0*6+1*7+4*8+9*9+9*10=253
  //253%11=0 ===> legal
	//	=1===>  illegal

#include<stdio.h>
int main()
{
	int isbn,sum=0,count=0;
	printf("enter the value of ISBN number ");
	scanf("%d",&isbn);
	while(isbn%10!=0) 
	{                //140160149900
		isbn=isbn/10;
		count++;
	}
	if(count==10)
	{
	
	for(int i=10;i>0;i--)
	{
		int a=isbn%10;
			sum=sum+(a*i);
			isbn=isbn/10;		
	}
	sum=sum%11;
	if(sum==0)
	printf("the isbn number is 	LEGAL");
	else
	printf("the isbn number is ILLEGAL");
}
	else
	printf("the number isILLEGAL");
	return 0;
}
