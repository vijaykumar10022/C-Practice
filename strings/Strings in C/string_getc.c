//Using standard library function to read a line of text
//C program to read line of text using gets() and puts()

//To make life easier, there are predefined functions gets() and puts in C language to read and display string respectively.

#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
    printf("Name: ");
    puts(name);    //Function to display string.
    return 0;
}
