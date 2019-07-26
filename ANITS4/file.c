#include<stdio.h>
int main(){
	FILE *f=fopen("vj.txt","w");
	char data[100];
	if(f==NULL){
		printf("File is Not created");
	}  
	else{
		for(int i=0;i<5;i++){
			fgets(data,sizeof(data),stdin);
			fputs(data,f);
	}
		
		//printf("File created sucessfully!!")
		
		//fputs("hiiiiiiiiii",f);
		//fputs("thank you for supporting..",stdout);
		//printf("Data Stored Success fully!!");
	}
	fclose(f);
return 0;


}


