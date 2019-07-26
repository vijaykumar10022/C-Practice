#include <stdio.h>
int board[100][100];
int nrow, ncol;
void init_board(int nrow,int ncol){
     int j;
     for(int i=0;i<nrow;i++)
         for(j=0;j<ncol;j++)
              board[i][j]=0;                   
}

bool isValid(int i,int j)
{
     if(i<0 || i>(nrow-1) || j<0 || j>(ncol-1)) return false;
     return true;
}

void print_board(int count)
{
     int j;
     printf("Field #%d:\n",count);
      for(int i=0;i<nrow;i++){
            for(j=0;j<ncol;j++)  
            {
                  if(board[i][j]<0) printf("*");
                  else printf("%d",board[i][j]);               
            }
            if(i<(nrow-1))printf("\n");
      }
      //printf("\n");
}

int main() {
    
	char ch;
	int j,count=0;
    //freopen ( "10189.in" , "r" , stdin ) ;
    //freopen ( "10189.out" , "w" , stdout ) ;    
	while (1) {
        scanf("%d %d",&nrow,&ncol);
        init_board(nrow,ncol);
        if(nrow==0 && ncol==0) break; 
        if(count!=0)printf("\n\n");       
        count++;
        for(int i=0;i<nrow;i++){
            for(j=0;j<ncol;j++)                
            {
                                                 
                  scanf("%c",&ch);
                  
                  while(ch==10) scanf("%c",&ch);
                  if(ch=='.') continue;
                  if(ch == '*'){ board[i][j]=-100;
                      if(isValid(i-1,j-1)) board[i-1][j-1]++;
                      if(isValid(i-1,j)) board[i-1][j]++;
                      if(isValid(i-1,j+1)) board[i-1][j+1]++;
                      if(isValid(i,j-1)) board[i][j-1]++;
                      if(isValid(i,j+1)) board[i][j+1]++;
                      if(isValid(i+1,j-1)) board[i+1][j-1]++;
                      if(isValid(i+1,j)) board[i+1][j]++;
                      if(isValid(i+1,j+1)) board[i+1][j+1]++;
                  }          
            }            
        } 
        print_board(count);   
   }      	
}     
