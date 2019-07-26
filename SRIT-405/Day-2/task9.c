//~ 9).Input:
//~ Enter marks of five subjects: 95 76 85 90 89
//~ note:>90-->A
     //~ 90<n>80-->B
     //~ 80<n>70-->C
     //~ 70<n>40-->D
     //~ 40<n-->Fail
//~ Output:
//~ Total = 435
//~ Percentage = 87.00-->
//~ Grade B

//~ 90<per>100-->Grade A
//~ 80<per>90-->Grade B
//~ 70<per>80-->Grade C
//~ 50<per>70-->Grade D
//~ per<40-->Fail
#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	int total=sub1+sub2+sub3+sub4+sub5;
	printf("Total = %d\n",total);
	int percentage=((total/500.0)*100);
	printf("Percentage = %d\n",percentage);
	if(percentage>=100&&percentage<=90){
		printf("Grade A\n");
	}
	else if (percentage>=80&&percentage<90){
		printf("Grade B\n");
	}
	else if(percentage>=70&&percentage<80){
		printf("Grade C\n");
	}
	else if(percentage>=60&&percentage<40){
		printf("Grade D\n");
	}
	else{
		printf("Fail\n");
	}
	return 0;
}
