#include<stdio.h>
struct student {
	char name[30];
	int roll_num;
	char gmail[30];
	int phone_num;
	int age;
	int year;
};
int main(){
	printf("Enter No of Student Data");
	int n;
	scanf("%d",&n);
	
	struct student std[n];
	printf("Enter %d of Student Data",n);
	for(int i=1;i<=n;i++){
		printf("Enter %d student Data",i);
		printf("Enter name of Student: ");
		scanf("%s",std[i].name);
		printf("Enter RollNumber:");
		scanf("%d",&std[i].roll_num);
		printf("Enter Phone Number");
		scanf("%d",&std[i].phone_num);
		printf("Enter Gmail");
		scanf("%s",std[i].gmail);
		printf("Enter Student age");
		scanf("%d",&std[i].age);
		printf("Enter student acadamic year");
		scanf("%d",&std[i].year);		
	}
	printf("Name\tRollNumber\tgmail\tPhonenumber\tage\tyear\n");
	printf("----\t----------\t-----\t-----------\t---\t----\n");
	for(int i=1;i<=n;i++){
	printf("%s\t %d\t %s\t %d\t %d \t  \n",std[i].name,std[i].roll_num,std[i].gmail,std[i].age,std[i].year);
	}
return 0;
}
