#include<stdio.h>
void readmarks(int m[],int n){
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);	
}
void printmarks(int m[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d ",m[i]);
	}
}
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int partition(int ar[], int l, int r, int *n)
{
  int i, m = l, x = ar[l];
  *n = r;
  for(i=l+1; i <= *n; ++i)
  {
    if(ar[i] < x)
    {
      m++;
      swap(&ar[i], &ar[m]);
    }
    else if(ar[i] == x)
    {
      swap(&ar[i], &ar[*n]);
      *n = *n - 1;
      --i;
    }
  }
  swap(&ar[l], &ar[m]);
  for(i = 0; i < (r - *n); ++i)
  {
    swap(&ar[m + i + 1], &ar[r - i]);
  }
  *n = m + i;
  return m;
}
void qsort(int arr[],int low,int high)
{
	int m,n=0;
	if(low>=high)
	{
		return;
	}
		m=partition(arr,low,high,&n);
		qsort(arr,low,m-1);
		qsort(arr,n+1,high);
}
int main()
{
	int n;
	scanf("%d",&n);
	int marks[n];
	readmarks(marks,n);
	qsort(marks,0,n-1);
	printmarks(marks,n);
	return 0;

}
		
