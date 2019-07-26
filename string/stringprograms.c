//~ #include <stdio.h>
//~ int main()
//~ {
	//~ char name[30];
	//~ printf("Enter name: ");
	//~ scanf("%s",name);
	//~ 
	//~ printf("Name is: %s\n",name);
	//~ return 0;
//~ }

//~ #include <stdio.h>
//~ int main()
//~ {
	//~ char name[30];
	//~ printf("Enter name: ");
	//~ scanf("%[^\n]",name);
	//~ //The format specifier "%[^\n]" tells to the compiler that read the characters until "\n" is not found.
	//~ printf("Name is: %s\n",name);
	//~ return 0;
//~ }

//~ #include<stdio.h>
//~ int main(){
	//~ int age;
	//~ char name[30];
	//~ char temp;
	//~ 
	//~ printf("Enter age: ");
	//~ scanf("%d",&age);
	//~ printf("Enter name: ");
	//~ scanf("%c",&temp);//temp statement to clear buffer
	//~ scanf("%[^\n]",name);
	//~ printf("Name is: %s, age is: %d\n",name,age);
	//~ return 0;
//~ }

#include <stdio.h>
int main()
{
    int age;
	char name[30];
	char temp;
	
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter name: ");
	scanf("%c",&temp); // temp statement to clear buffer
	fgets(name,30,stdin);
	
	printf("Name is: %s, age is: %d\n",name,age);
	return 0;
}
