//~ 9).Input:
//~ Enter marks of five subjects: 95 76 85 90 89
//~ Output:
//~ Total = 435
//~ Average = 87
//~ Percentage = 87.00-->
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	printf("enter 5 subject marks:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	printf("total=%d\n",s1+s2+s3+s4+s5);
	printf("avg=%d\n",(s1+s2+s3+s4+s5)/5);
	printf("per=%2f\n",(((s1+s2+s3+s4+s5)/500.0)*100));
	return 0;
}
	
