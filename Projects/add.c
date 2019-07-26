#include<stdio.h> 
int main(){
	
	static int array[100][100];
	 int i, j, m, n;
 
    printf("Enetr the order of the matix \n");
    scanf("%d %d", &m, &n);
    if (m == n )
    {
        printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
            }
        }
        printf("The given matrix is \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
           
        }
        printf("After Diagonal Matrix is \n");
        
        for (i=0;i<m;i++){
			for(j=0;j>=0;j++){
				if(i+j) 
        
	}
}
/*
int arr[6][6];
for(i=0;i<=5;i++){ 
for(j=5;j>=0;j--){ 
    if(i+j==5) arr[i][j]=0; 
    else if(i+j>5) arr[i][j]=-1; 
    else arr[i][j]=1; }
    }
    for(i=0;i<=5;i++){ for(j=0;j<=5;j++) printf("%d\t",arr[i][j]);
   printf("\n");
} 
return 0;
}*/
