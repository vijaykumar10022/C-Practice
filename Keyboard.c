#include<stdio.h>
#include<string.h>
int main()
{
 char a[100],ch;
 int i,n;
 printf("enter the string size:");
 scanf("%c",&a);
 n=strlen(a);
  for(i=0;i<n;i++)
  {
    ch=a[i];
    switch(ch)
    {
     case 'w':printf("q");
           break;
     case 'e':printf("w");
	break;
     case 'r':printf("e");
      break;
     case 't':printf("r");
       break;
     case 'y':printf("t");
      break;
     case 'u':printf("y");
      break;
     case 'i':printf("u");
      break;
     case 'o':printf("i");
      break;
     case 'p':printf("o");
    break;
     case '[':printf("p");
    break;
     case ']':printf("[");
      break;
     case  's':printf("a");
       break;
     case 'd':printf("s");
      break;
     case 'f':printf("d");
      break;
     case 'g':printf("f");
      break;
     case 'h':printf("g");
      break;
    case 'j':printf("h");
    break;
     case 'k':printf("j");
    break;
     case 'l':printf("k");
      break;
     case ';':printf("l");
       break;
     case 'x':printf("z");
      break;
     case 'c':printf("v");
      break;
     case 'v':printf("c");
      break;
     case 'b':printf("v");
      break;
    case 'n':printf("b");
    break;
     case 'm':printf("n");
    break;
     case ',':printf("m");
      break;
     case '.':printf(",");
       break;
     case '/':printf(".");
      break;
     case ' ':  printf(" ");
       break;
     case 'a':printf("invalid input");
      break;
     case 'q':printf("invalid input");
      break;
     case 'z':printf("invalid input");
      break;
     default :printf("invalid input");
      break;
   }
 }
 return 0;
}
