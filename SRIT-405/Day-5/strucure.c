#include<stdio.h>
struct student{
	int sno;
	char name[10];
	float marks;
};
int main(){
	struct student m;
	int n;
	float sum=0;
	printf("Enter No of Student data:");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		printf("Enter Student data %d\n",i+1);
		printf("Enter sno :");
		scanf("%d",&m.sno);
		printf("Enter Name :");
		scanf("%s",m.name);
		printf("Enter Marks :");
		scanf("%f",&m.marks);
		sum=sum+m.marks;
		printf("S.No-->%d\nName-->%s\nMarks-->%f\n",m.sno,m.name,m.marks);
	}
	printf("Total marks = %f\n",sum);
	return 0;
}
