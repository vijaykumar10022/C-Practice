#include<stdio.h>
#include<string.h>
struct student 
{
           int id;
           char name[20];
           float percentage;
};
int mian(){
	 struct student record = {0}; //Initializing to null
 
           record.id=1;
           strcpy(record.name, "Raju");
           record.percentage = 86.5;
 
           printf(" Id is: %d \n", record.id);
           printf(" Name is: %s \n", record.name);
           printf(" Percentage is: %f \n", record.percentage);
	return 0;
}
