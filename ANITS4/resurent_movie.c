#include<stdio.h>
int main(){
	int vijay=0,ravi=0,muni=0,hari=0,kumar=0,lalitha=0,manoj=0;
	scanf("%d%d",&vijay,&ravi);
	int total=vijay+ravi;
	printf("%d Total Amount-Movie&Resturent- invested by Vijay&Ravi\n",total);	
	int avg=total/7;
	printf("invested amount is %d Credited amount-->%d  Debit %d Vijay\n",vijay,vijay-avg,avg);
	printf("Invested amount is %d Credited amount-->%d Debit %d Ravi\n",ravi,ravi-avg,avg);
	printf("Debited amount -->%d hari\n",avg-hari);
	printf("Debited amount -->%d Muni\n",avg-muni);
	printf("Debited amount -->%d Lalitha\n",avg-lalitha);
	printf("Debited amount -->%d manoj\n",avg-manoj);
	printf("Debited amount -->%d kumar\n",avg-kumar);	
return 0;	
}
