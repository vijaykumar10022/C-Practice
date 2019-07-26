#include<stdio.h>
struct student{
		int Sno;
		char Name[10];
		char Roll_num[10];
		long long int Phno;
		float marks;
};
int main()
{
	struct student std;
	int n;
	printf("Enter No of Students Data: ");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		printf("Enter Student Data %d\n",i+1);
		printf("Enter s.no:");
		scanf("%d",&std.Sno);
		printf("Enter Name:");
		scanf("%s",std.Name);
		printf("Enter Your RollNumber:");
		scanf("%s",std.Roll_num);
		printf("Enter Phno:");
		scanf("%lld",&std.Phno);
		printf("Enter Marks");
		scanf("%f",&std.marks);
		printf("Student Data %d\n",i+1);
		printf("----------------\n");
		printf("S.No =%d\n",std.Sno);
		printf("Name = %s\n",std.Name);
		printf("RollNumber = %s\n",std.Roll_num);
		printf("Phno = %lld\n",std.Phno);
		printf("Marks =%f\n",std.marks);
	}
	return 0;
}
