#include<stdio.h>
void primitive_calculator(int n){
	int min_steps[n+1];
	int predecessor[n+1];
	int min_stepd[n];
	for(int i=2;i<=n;i++){
		 min_stepd[i]=min_steps[i-1]+1;
		predecessor[i]=i-1;
		if(i%3 == 0)
		{
			if (min_steps[i/3] < min_steps[i]) 
			{
                min_steps[i] = min_steps[i/3] + 1;
                predecessor[i] = i/3;
            }
		}
		if (i % 2 == 0) 
		{
            if (min_steps[i/2] < min_steps[i]) {
                min_steps[i] = min_steps[i/2] + 1;
                predecessor[i] = i/2;
            }
		}
	}
	printf("%d",min_steps[n]);
	int sequence[n];
	for (int i = n; i != 0; i = predecessor[i]) {
        sequence[i]=i;
    }
    for (int it =sequence[0]; it != sequence[n]; ++it) {
        printf("%d",it);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	primitive_calculator(n);
return 0;
}

