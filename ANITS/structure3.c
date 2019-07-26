#include<stdio.h>
struct student{
	char stdname[50];
	int roll;
	int phno;
}s1,s2;
int main(){
	//struct student s;
	printf("Enter Student Information1).student name.2).RollNumber.3)Phone Number\n");
	scanf("%s",s1.stdname);
	scanf("%d",&s1.roll);
	scanf("%d",&s1.phno);
	printf("Enter student data 2:\n");
	scanf("%s",s2.stdname);
	scanf("%d",&s2.roll);
	scanf("%d",&s2.phno);
	printf("Student Information\n");
	printf("Student_mname\tStudent_RollNumber\tStudent_phoneNumber\n");
	printf("=============\t==================\t===================\n");
	printf("%s\t\t\t%d\t\t\t%d\n",s1.stdname,s1.roll,s1.phno);
	printf("%s\t\t\t%d\t\t\t%d\n",s2.stdname,s2.roll,s2.phno);	
return 0;
}
