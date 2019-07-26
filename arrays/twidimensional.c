#include<stdio.h>
int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<=3-1;i++){
		for(int j=0;j<=3-1;j++){
			printf("%d\t ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
/*i=0,1,2;o<=2,1<=2,2<=2,3<=2;
 * j=0,1,2,3;0<=2,1<=2,2<=2,3<=2
 * pf(arr[0][2])
 *     1	2	3
 * pf(arr[1][2]
 * 		4	5	6
 * pf(arr[2][2]
 * 		7	8	9
 * 
 * 
 * 	
 * 	
 * 
*/
