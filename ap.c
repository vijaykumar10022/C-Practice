#include<stdio.h>
int main(){
  int num[8]={1,2,4,5,7};
  int nn[2]={8,5};
  num[8]=nn[2];
  for (int i;i<8;i++){
  printf("%d \n",num[i]);
}
  return 0;
 }
