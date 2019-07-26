//~ input:1234
	          //~ 4321
//~ 
//~ output:1*4 2*3 3*2 4*1
        //~ 4   6   6   4
#include<stdio.h>
int rev_number(int n){
	int rev=0;
	while(n!=0){//1234!=0(T),,123!=0(T),12!=0(T),1!=0(T),0!=0(F)
		 rev=(rev*10+n%10);//,rev=0*10+4-->4,4*10+123%10-->40+3-->43,43*10+12%10-->430+2-->432,432*10+1%10-->4320+1-->4321
		n=n/10;//1234/10-->123,123/10-->12,12/10-->1,1/10-->0
	}
	return rev;
}
int count_number(int n){
	int count=0;
		while(n!=0){
			n=n/10;
			count++;
		}
		return count;
}
void result(int arr[],int count,int rev,int org){
	int i=0;
	while(org!=0){//1234!=0(T)
		int lo=org%10;//1234%10-->4
		int lr=rev%10;//4321%10-->1
		arr[i]=lo*lr;
		i++;
		org=org/10;
		rev=rev/10;
	}
}
void display(int arr[],int count){
	for(int j=0;j<=count-1;j++){
		printf("%d ",arr[j]);
	}
}
int main(){
	int n;//rev=0,4,43,432,4321 count=0,1,2,3,4
	scanf("%d",&n);//n=1234,123,12,1,0
	int rev=rev_number(n);
	int count=count_number(n);
	int arr[count];//arr[4]-->4 digits
	result(arr,count,rev,n);
	display(arr,count);
	return 0;
}
