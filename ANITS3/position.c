#include<stdio.h>
int main()
{
	int size,i,k,t;
	scanf("%d",&t);
	for(k=0;k<t;k++){
		scanf("%d",&size);
		int a[size],p,n;
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d%d",&p,&n);
		if(p<0||p>size-1)
		{
			printf("Insertion not possible");
		}
		else
		{
			for(i=size;i>=p;i--)
			{
				a[i+1]=a[i];
			}
			a[p]=n;
			size++;
		}
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
	
	

