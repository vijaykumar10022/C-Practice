//pointer to pointer
#include <stdio.h>
int main(int argc, char **argv)
{
	int a=20;
	int *pt1=&a;
	int **pt2=&pt1;
	printf("Address of variable is %d\n",&a);
	printf("Address of pt1 is %d\n",pt1);
	printf("Address of pt2 is %d\n",pt2);
	printf("Address of own pt1 is %d\n",&pt1);
	printf("Address of Own pt2 is %d\n",&pt2);
	
	return 0;
}

