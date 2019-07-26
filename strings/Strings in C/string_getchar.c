//An approach to reading a full line of text is to read and store each character one by one.

//Example #2: Using getchar() to read a line of text
// C program to read line of text character by character.

#include <stdio.h>
int main()
{
    char name[30], ch;
    int i = 0;
    printf("Enter name: ");
    while(ch != '\n')    // terminates if user hit enter
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';       // inserting null character at end
    printf("Name: %s", name);
    return 0;
}
