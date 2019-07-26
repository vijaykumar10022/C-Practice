#include<stdio.h>
struct students{
	char name[10];
	char roll[10];
}s1;
int main(){
	FILE *std=fopen("std.txt","w");
	if(std==NULL){
		printf("File Not Created");
	}
	else {
	printf("Enter No of Student Data");
	int n;
	scanf("%d",&n);
	printf("Enter %d of Student name and Roll Numbers \n",n);
	for(int i=0;i<=n-1;i++){
		fgets(s1.name,sizeof(s1.name),stdin);
		fputs(s1.name,std);
		
		//fscanf("%d",&s1.roll);
		fgets(s1.roll,sizeof(s1.roll),stdin);
		fputs(s1.roll,std);
		//~ scanf("%s",s1.name);
		//~ scanf("%d",&s1.roll);
	}
	//~ for(int i=0;i<=n-1;i++){
		//~ fputs(s1.name,std);
		//~ fputs(s1.roll,std);
		printf("\nStudent Data:%d\n",i);
		printf("===============\n");
		printf("Name is %s\n",s1.name);
		printf("RollNumber is %d",s1.roll);
	//~ }
}
	fclose(std);
	//struct students s1,s2;
	//~ scanf("%s",s1.name);
	//~ scanf("%d",&s1.roll);
	//~ printf("%s\n",s1.name);
	//~ printf("%d\n",s1.roll);
	//~ scanf("%s",s2.name);
	//~ scanf("%d",&s2.roll);
	//~ printf("%s\n",s2.name);
	//~ printf("%d\n",s2.roll);
return 0;	
}
