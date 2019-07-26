/**
 * C program to count total number of words in a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i,charcters=0,l;
   
    /* Input string from user */
    printf("Enter any string: ");
    gets(str);
    i = 0;
    //words = 1;

    /* Runs a loop till end of string */
    while(str[i] != '\0')
    {
        
            charcters++;

        i++;
    }

    printf("Total number of character in a given string  = %d\n", charcters);
   
    return 0;
}
