#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter Five Subjects of Marks(0-100):");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	printf("Total=%d\n",sub1+sub2+sub3+sub4+sub5);
	printf("AVG = %d\n",(sub1+sub2+sub3+sub4+sub5)/5);
	float  per=((sub1+sub2+sub3+sub4+sub5)/500.0)*100;
	printf("Percentage = %.2f\n",per);
	if(per>90){
		printf("Grade = A\n");
	}
	else if(per>80){
		printf("Grade = B\n");
	}
	else if(per>70||per>60){
		printf("Grade = C\n");
	}
	else if(per>50||per>40){
		printf("Grade = D\n");
	}
	else
	{
		printf("Fail\n");
	}
	return 0;
}
