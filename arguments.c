#include <stdio.h>

int main(int a, char **v)
{
	//~ int c,d;
	//~ scanf("%d%d",&c,&d);
	int d;
	scanf("%d%d",&v[1],&v[2]);
	d=v[1]+v[2];
	printf("%d",d);
	printf("No of arguments:%d",a);
	printf("vector position is:%d",v[1]);
	printf("vector position is:%d",v[2]);
	return 0;
}

