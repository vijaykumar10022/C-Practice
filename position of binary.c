//to convert decimal to binary format
#include <stdio.h>
int binary(int num){
	unsigned long long remainder;
    unsigned long long base = 1, binary = 0;
while (num > 0)

    {
        remainder = num % 2;   
        binary = binary + (remainder * base);
        num = num / 2;
        base = base * 10;
    }
    return binary;
}
int main()
{
    int n;
    
    printf("Enter a decimal integer \n");
    scanf("%d", &n);
   unsigned long long int y=binary(n);
    
      printf("binary equivalent is = %llud \n", y);
      return 0;
    
}
