#include<stdio.h>
int main()
{
		int i,n;
		printf("Enter N Value : ");
		scanf("%d",&n);
		for(i=n;i>=1;i--)
			printf("%d,",i);
		return 0;}
output:5 6 7 8 9 10 11 12
2)To print odd numbers between n
n=8
1 3 5 7
for(i=1;i<=n;i++)
{
	if(i%2==1)
	printf("%d",i);
}
3)Sum of even numbers between n
n=10			

output:30(2+4+6+8+10)
int sum=0;
for(i=1;i<=n;i++)
{
	if(i%2==0)
	sum=sum+i;
}
printf("%d",sum);
4)To print multiplication table
n=5
5*1=5
5*2=10


5*10=50


