#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],n,i,j=0,k,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        j=abs(a[i]-a[i+1]);
        if(i>0)
        {
            if(j-k==-1||j-k==1||j-k==0)
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        k=j;
    }
    if(flag==0)
        printf("Not jolly");
    else
        printf("Jolly");
             
	return 0;
}
