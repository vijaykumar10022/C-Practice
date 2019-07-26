//~ 1).input:700days
   //~ output:1 year 47 weeks 6 days
    //~ 
//~ explanation:700 1-->365-->335--> 47-->6days
//~ 
//~ year=700/365-->1
//~ 
//~ 365)700(1-->quo
	//~ 365
	//~ ---
	//~ 335-->Rem
	//~ 
//~ weeks=(700%365)/7
//~ 
//~ 7)365(47
  //~ 359
  //~ ---
    //~ 6
	      //~ (1*365)  +(47*7)			
 //~ days=d-((year*365)+(weeks*7))
     //~ =700-(365+329)
     //~ =700-694
     //~ =6
     
#include<stdio.h>
int main(){
	int totaldays;
	scanf("%d",&totaldays);
	int years=totaldays/365;
	printf("Years = %d years\n",years);
	int weeks=(totaldays%365)/7;
	printf("Weeks = %d weeks\n",weeks);
	int days=(totaldays-((years*365)+(weeks*7)));
	printf("Days = %d days\n",days);	
	return 0;
}
