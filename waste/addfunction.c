#include<stdio.h>
int main(){
  char *pmessage;
  pmessage = "now is the time";
  char amessage[] = "now is the time";
  char *pmessage = "now is the time";
  return 0;
 }
 /* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t)
{
int i;
i = 0;
while ((s[i] = t[i]) != ’\0’)
i++;
}
