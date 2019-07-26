
//0+1+2+3+4+5+6+7+8+9+10=55
//~ input:0 10
//~ output:0+1+2+3+4+5+6+7+8+9+10=55
#include <stdio.h>
int main(){
	int i,n1,n2,pro=1;
	printf("Enter n1,n2 values:");
	scanf("%d%d",&n1,&n2);//100
	for(i=n1;i<=n2-1;i++){
		printf("%d*",i);
		pro=pro*i;
	}
	pro=pro*i;
	printf("%d=%d",i,pro);
	//printf("product of Given Numbers(%d-%d):%d\n",n1,n2,pro);
	return 0;
}
//n1=0,n2=10,sum=0
/*i=0;0<=10
	0+
	sum=0+0-->0
	i++;-->1
i=1;1<=10
	1+
	sum=0+1
	i++-->2
i=2;2<=10
	2+
	sum=1+2-->3
	i++
i=3;3<=10
	3+
	sum=3+3-->6
	


/*i=0;0<=10
	0
	i++-->1
  i=1;1<=10
    1
    i++-->2
  i=2;2<=10
     2
     
   
   
   i=10;10<=10
     10
     i++-->11
   i=11;11<=10*/
	
//~ 182G1A0400
//~ 182G1A0401
//~ 182G1A0402
//~ 182G1A0403
//~ 182G1A0404
//~ 182G1A0405
//~ 182G1A0406
//~ 182G1A0407
//~ 182G1A0408
//~ 182G1A0409
//~ 182G1A0410
