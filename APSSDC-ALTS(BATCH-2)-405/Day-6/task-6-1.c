//~ 1).
   //~ input:369874
   //~ input:124578
   //~ output:3 1 6 2 9 4 8 5 7 7 4 8
   //~ a[6]={3,6,9,7,4};
   //~ b[6]={1,2,4,5,7,8};
   //~ c[12]={3,1,6,2,9,4,8,5,7,7,4,8};
#include<stdio.h>
int count(int v){
	int count=0;
	while(v!=0)
	 {
		 v=v/10;
		 count++;
	 }
	return count;
}
void insert_digit(int a[],int s,int v){
	while(v!=0)//a[],s=3 v=123,12!=0,1!=0
	 { 
		 a[s-1]=v%10;//a[2]=123%10-->a[2]=3,a[1]=12%10-->a[1]=2,a[0]=1%10-->a[0]=1
		 s--;//s=2,s=1
		 v=v/10;//123/10-->12,12/10-->1
	 }
}

void insert_array(int a[],int b[],int c[],int s){
	int s1=0,s2=0;
	for(int i=0;i<=s-1;i++)
	 {
		 if(i%2==0)
		 {
			 c[i]=a[s1];//c[0]=a[0]-->c[0]=1,c[2]=a[1],c[2]=2
			 s1++;//1
		 }
		 else
		 {
			 c[i]=b[s2];//c[1]=b[0]-->c[1]=4
			 s2++;
		 }
	 }
}
void display_array(int c[],int s){
	for(int i=0;i<=(s)-1;i++)
	{
		 printf("%d ",c[i]);
	 }
}
int main()
{
	int n1,n2,count1,count2;
	printf("enter two value");
	scanf("%d%d",&n1,&n2);//n1=123 n2=456
	count1=count(n1);//3
	count2=count(n2);//3
	int a[count1],b[count2];//a[3],a[3]
	insert_digit(a,count1,n1);
	insert_digit(b,count2,n2);
	int c[count1+count2];
	insert_array(a,b,c,count1+count2);
	display_array(c,count1+count2);
	return 0;
}
/*123
	1).count-->3
	2).allocate memory-->a[3]-->12bytes -->3 values
	3).digit inssertion-->a[3]={1,2,3};
//456
	1).count-->3
	2).allocate memory-->b[3]-->12bytes -->3 values
	3).digit inssertion-->b[3]={4,5,6};

a[3]={1,2,3};	b[3]={4,5,6};
c[6]={1,4,2,5,3,6}*/








