#include<stdio.h>

void readArray(float a[],int n)

{

	 int i;

	 for(i=0;i<n;i++)

	{

		 printf("Enter %d element",i);

		 scanf("%f",&a[i]);

	}

}

void printArray(float a[],int n)

{

	 int i;

	 for(i=0;i<n;i++)

	 printf("%.2f ",a[i]);

}

float sumArray(float a[],int n)

{

	 int i;

	 float sum=0;

	 for(i=0;i<n;i++)

	 {

		sum = sum+a[i];

	 }

	 return sum;

	}

float maxArray(float a[],int n)

{

	 int i;

	 float max;

	 max=a[0];

	 for(i=1;i<n;i++)

	 {

		 if(max<a[i])

		 max=a[i]; 

	 }

	 return max;

}

float minArray(float a[],int n)

{

	 int i;

	 float min;

	 min=a[0];

	 for(i=1;i<n;i++)

	 {

		 if(min>a[i])

		 min=a[i];

	 }

	 return min;

}
void search(float a[],int n, int se)
{
	int c;
	for (c = 0; c < n; c++)
   {
      if (a[c] == se)     /* if required element found */
      {
         printf("%d is present at location %d.\n", se, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", se);
 
   return se;
}
	

int main()

{

 float arr[5],sum,max,minimum,search,s;

 printf("Reading array elements \n");

 readArray(arr,5);

 printf("Printing array elements  \n");

 printArray(arr,5);

 sum=sumArray(arr,5);

 printf("\n sum of array elements is %f",sum);

 max=maxArray(arr,5);

 printf("\n Maximum element of an array is %f",max);

 minimum=minArray(arr,5);

 printf("\n Minimum element of an array is %f ",minimum);
 
 printf("Enter the number to search\n");
 scanf("%d", &search);
 s=search(arr,5,search);
 printf("\n Searched Element in the array is %d\n",s)

 return 0;

}
