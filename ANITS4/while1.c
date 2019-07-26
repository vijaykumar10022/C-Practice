//input:5789  58974
//output:first digit=5&last digit =9
#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);//7894 
	int last=num%10;//4
	while(num>=10){//7894 789>=10,78>=10,7>=10
		num=num/10;//7894/10-->789/10-->78/10-->7
		//printf("%d\n",num);//789,78,7
	}
	printf("First Digit is =%d\n",num);
	printf("Last Digit is =%d",last);
return 0;
}
