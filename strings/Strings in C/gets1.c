#include<stdio.h>
#include<stdlib.h>
int main()
{
char str1[10];
printf("Enter a string:");
//gets(str1);

//puts(str1);
fgets(str1,sizeof str1,stdin);
printf("\n");
puts(str1);
}
