#include<stdio.h>
int main(){
char *p="abcd 1234";
puts(p);
gets(p+4);
puts(p);
return 0;
}
