#include<stdio.h>
int main()
{
	int s,e,i,z,cc=1,max=0;
	scanf("%d%d",&s,&e);
	for(i=s;i<=e;i++)
	{
		z=i;
		while(z!=1)
		{
			if(z%2==0)
			{
				z=z/2;
			}
			else
			{
				z=z*3+1;
			}
			cc++;
		}
		if(cc>max)
		{
			max=cc;
		}
		cc=1;
	}
	printf("%d",max);
	return 0;
}
