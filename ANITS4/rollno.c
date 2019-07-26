//input:10 80
//output: 1.3161265210
//        2.3161265212
//        3.3161265213
//
//         70
#include <stdio.h>

int main()
{
	int i,k,j;
	scanf("%d%d",&k,&j);
	for(i=k;i<=j;i++)
	{
		printf("%d.31612652%d\n",i,i);
	}	
	return 0;
}
//i=10 j=20
//for(i=1;1<=70)
//3161265211
//for(i=2;2<=70
//3161265212)
