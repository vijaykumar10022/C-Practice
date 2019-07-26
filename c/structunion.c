#include <stdio.h>
struct student
	{
		int  mark;//4
		char name[10];//10
		float average;//4
	}report1;
	//total size=20
union student1
	{
		int  mark;//4
		char name[10];//10
		float average;//4
		//total size=12
		
	}report2;	
int main(int argc, char **argv)
{
	printf("size of int in struct :%d\n",sizeof(report1.mark));
	printf("size of char in struct :%d\n",sizeof(report1.name));
	printf("size of float in struct :%d\n",sizeof(report1.average));
	printf("size of struct:%d\n",sizeof(report1));
	printf("size of int in union :%d\n",sizeof(report2.mark));
	printf("size of char in union :%d\n",sizeof(report2.name));
	printf("size of float in union :%d\n",sizeof(report2.average));

	printf("size of union:%d\n",sizeof(report2));
	
	return 0;
}

