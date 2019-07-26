#include <stdio.h>
#include <stdlib.h>
int main(int v, char **vr)
{
	for(int i=1;i<v;i++){
		printf("%d ",atoi(vr[i]));
	}	
	return 0;
}

