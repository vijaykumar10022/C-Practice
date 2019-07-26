
#include <stdio.h>
 
struct Student{
int Rollnumber;
char Name[30];
int Marks;
};
 
int main(int argc, char **argv)
{

struct Student s1;
FILE *file =fopen("d:\\student.txt","w");
if(file==NULL)
{
printf("Error opening a file.....");
return 1;
}
while(1)
{
printf("Enter ROll numn=ber:");
scanf("%d",&s1.Rollnumber);
printf("Enter Name: ");
scanf("%s",s1.Name);
printf("Enter Marks: ");
scanf("%d",&s1.Marks);
fprintf(file,"%d\t%s\t%d\n",s1.Rollnumber,s1.Name,s1.Marks);
printf("Continue (Y/N) ");
fflush(stdin);
char ch=getchar();
if(ch == 'N' || ch == 'n')
break;
}
fclose(file);
return 0;
}
 
