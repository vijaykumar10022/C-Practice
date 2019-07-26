//C program for printing  Charaacters with Ascii values:
#include<stdio.h>
int main()
{
	int i;
  printf("Enter a character to find its asciivalue:\n\n");
  for(i=0;i<127;i++)
  {
	   printf("%c ascivalue =%d\n ",i,i);
	  
  }
  
 return 0;
}


