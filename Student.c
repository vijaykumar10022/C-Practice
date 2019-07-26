#include<stdio.h>
struct student{
	char sname[20];
	int roll;
}s;
int main()
{
	readSdata();
	printSdata();
	return 0;	
}
void readSdata()
{
	printf("Enter Student Data\n");
	printf("Enter A Student name\n");
	
	scanf("%s",s.sname);
	printf("Enter a Student Rollnumber\n");
	scanf("%d".&s.roll);
}	
void printSdata()
{
	printf("Student Name is: %s\n",s.sname);
	printf("Student Roll No is: %d\n",s.roll);
}
