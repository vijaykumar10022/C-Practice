#include<stdio.h>
#define max 50
 void readarray(int data[],size){
	 printf("\nEnter Elements:");
	 for(int i=1;i<=size;i++)
        scanf("%d",&data[i]);
 }
 void displayarray(int data[],int size){
	for(i=1;i<=size;i++)
        printf("%d\t",data[i]);
 }
void inssort(int n, int data[])
{
    int index, i, j;
    printf("\nSorted List is:\n");
    for(i=1;i<=n;i++)    {  
		     index=data[i];     
		      for(j=i;j>0&&data[j-1]>index;j--)
            data[j]=data[j-1];
        data[j]=index;
    }
    for(i=1;i<=n;i++)
 
        printf("%d\t",data[i]);
}
 
int main()
{
    int i, size, data[max];
    printf("\nEnter no of Elements:");
    scanf("%d",&size);
    readarray(data,size);
    printf("\nUnsorted data:\n");
    displayarray(data,size);
    inssort(size, data);
    printf("After Sorting \n");
    displayarray(data,size);
    return 0;
}
