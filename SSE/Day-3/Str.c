#include<stdio.h>
struct std
{
	char name[20];
	int roll;
	float per;
};
int main()
{
	struct std s;
	scanf("%s",s.name);
	scanf("%d",&s.roll);
	scanf("%f",&s.per);
	printf("Name : %s\nRoll Number : %d\nPercentage : %f",s.name,s.roll,s.per);
	return 0;
}
