//n=1234 -->4321
#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("Enter any number to print in words: \n");
    scanf("%d", &n);
    while(n != 0)
    {			//num=(0*10)+(1234%10)
				//num=0+4-->4
				//num=(4*10)+(123%10)
				//num=(40)+3-->43
				//num=(43*10)+(12%10)
				//num=430+2-->432
				//num=(432*10)+(1%10)//
				//num=4320+1-->4321
        num = (num * 10) + (n % 10);
        n =n/10;//n=n/10-->1234/10-->123
				//n=123/10-->12	
				//n=12/10-->1
				//n=1/10-->0
    }
    printf("Reverse number og given digits are %d\n",num);		
		//4321
    while(num != 0)
    {		//(4321%10)-->1
			//(432%10)--->2
			//(43%10)--->3
			//(4%10)--->4
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;//4321/10--->432
					//432/10-->43
					//43/10-->4
					//4/10-->0
    }

    return 0;
}
