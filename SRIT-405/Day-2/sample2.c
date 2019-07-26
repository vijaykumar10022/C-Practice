#include<stdio.h>
int main()
{
	int n,count=0,max=1;
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	for(int i=n1;i<=n2;i++){
		n=i;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else
			{
				n=n*3+1;
			}
			count++;
		}
		//printf("Count=%d\n",count+1);
		if(max<count+1){
			max=count+1;
		}
		count=0;
	}
	printf("Maximum value is %d\n",max);
	return 0;
}


//~ 1 10                20
//~ 
//~ 
//~ 1-->1
//~ 2-->2
//~ 3-->8
//~ 4-->3
//~ 5-->6
//~ 6-->9
//~ 7-->17
//~ 8-->4
//~ 9-->20-->20
//~ 10-->7

//~ max=1,2,8,9
//~ if(max<count+1){
		//~ max=count+1//max=2,max=8,max=9,max=17,max=20
	//~ }
//~ 
//~ 1<1(F)
//~ 1<2(T)
//~ 2<8(T)
//~ 8<3(F)
//~ 8<6(F)
//~ 8<9(T)
//~ 9<17(T)
//~ 17<4(F)
//~ 17<20(T)
//~ 20<7(F)














