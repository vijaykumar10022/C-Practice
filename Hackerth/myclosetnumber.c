
#include <stdio.h> 
int getClosest(int val1, int val2, 
               int target) 
{ 
    if (target - val1 >= val2 - target) 
        return val2; 
    else
        return val1; 
} 
int findClosest(int arr[], int n, int target) 
{ 
    if (target<=arr[0]) 
        return arr[0]; 
    if (target>=arr[n-1]) 
        return arr[n-1]; 
    int i=0,j=n,mid=0; 
    while(i<j){ 
        mid=(i+j)/2; 
        if (arr[mid]==target) 
            return arr[mid]; 
        if (target<arr[mid]){ 
            if (mid>0&&target>arr[mid - 1]) 
                return getClosest(arr[mid-1],arr[mid],target); 
            j=mid; 
        } 
        else { 
            if (mid<n-1&&target<arr[mid + 1]) 
                return getClosest(arr[mid],arr[mid + 1], target);  
            i = mid + 1;  
        } 
    } 
    return arr[mid]; 
} 
  
int main() 
{ 
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<=size-1;i++){
		scanf("%d",&arr[i]);
	}
	int target=0;
    printf("%d",findClosest(arr, size, target)); 
} 
