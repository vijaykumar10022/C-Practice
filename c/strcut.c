#include <stdio.h>
#include <string.h>
struct student
	{
		int  mark;//4
		char name[10];//10
		float average;//4
	}report1,report2;
	
int main(int argc, char **argv)
{	
	report1.mark=100;
	//strcpy(report1.name,"vijay");
	printf("Enter report1 name");
	gets(report1.name);
	report1.average=80;
	report2.mark=80;
	//strcpy(report2.name,"kumar");
	printf("Enter reprot2 name");
	gets(report2.name);
	report2.average=70;
	printf("Reoprt1 data:\nMarks=%d\nname=%s\naverage=%f\n",report1.mark,report1.name,report1.average);
	printf("\n");
	printf("Report2 data:\nMarks=%d\nname=%s\naverage=%f\n",report2.mark,report2.name,report2.average);
	
	return 0;
}

