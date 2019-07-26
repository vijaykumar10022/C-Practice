#include<stdio.h>
#include<math.h>
int mian(){
	int n,i,j;
	scanf("%d",&n);
	int a[i][j];
	long long int s1=0,s2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if (i==j) s1+=a;
			if(i+j==(n-1)) s2+=a;
			
		}
		
		
	}
	printf("%d and %d",s1,s2);
	return 0;

}

