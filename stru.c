#include<stdio.h>
#include<string.h>
struct sdata {
	int RollNumber;//4
	char Name[10];//10
	int Marks;//4
	float Percentage;
};
int main(){
	struct sdata s1;
	FILE *fp ;
	//={101,"vijay",80,80.0};
	fp = fopen( "struct.txt", "w" ) ;
	if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
	printf("Enter Your RollNumber");
	scanf("%d",&s1.RollNumber);
	//gets(s1.Name);
	strcpy(s1.Name,"vijay");
	printf("Enter Your Marks");
	scanf("%d",&s1.Marks);
	printf("Enter Percentage");
	scanf("%f",&s1.Percentage);
	printf("Student RollNumber -->%d\n",s1.RollNumber);
	printf("Student Name -->%s\n",s1.Name);
	printf("student Marks-->%d\n",s1.Marks);
	printf("Student Percentage -->%f\n",s1.Percentage);
	puts(s1);
	printf("Closing the file struct") ;
         fclose(fp) ;
	
	
return 0;
}
