//Arrays
//~ 5
//~ 1+2+3+4+5=15
    //~ 0 1 2 3 4
    //~ 0   2   4
    //~ 1 + 3  + 5=9
      //~ 2   4  -->6
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//6
	int a[n];//24 bytes -->a[6]
	int v1=65,v2=97;
	for( int i=0;i<=n-1;i++){
		if(i%2==0){
			a[i]=v1;
			v1++;
		}
		else{
			a[i]=v2;
			v2++;
		}
	}
	for(int i=0;i<=n-1;i++){
		printf("%c ",a[i]);
	}
	return 0;
}
