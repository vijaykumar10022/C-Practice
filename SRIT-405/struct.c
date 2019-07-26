#include<stdio.h>
struct student{
		int sno;
		char name[10];
		int rollnumber;
}s;
int main(){
	for(int i=0;i<=2;i++){
		printf("Enter s.no Number :");
		scanf("%d",&s.sno);
		printf("Enter Name :");
		scanf("%s",s.name);
		printf("Enter Roll Number: ");
		scanf("%d",&s.rollnumber);
		printf("S.No -->%d\nName --> %s\nRollnumber -->%d\n",s.sno,s.name,s.rollnumber);
	}
	return 0;
}
