void read_array(int a[],int s){
		for(int i=0;i<=s-1;i++){
		scanf("%d",&a[i]);
	}
}
void display_array(int w[],int z){
	for(int i=0;i<=z-1;i++){
		printf("%d ",w[i]);
	}
}
void even_number(int a[],int s){
	for(int i=0;i<=s-1;i++){
		if(a[i]%2==0){
		printf("%d ",a[i]);
	}
	}
}
void odd_numbers(int a[],int s){
		for(int i=0;i<=s-1;i++){
		if(a[i]%2!=0){
		printf("%d ",a[i]);
	}
	}
}
void minimum_array(int a[],int s){
		int min=a[0];
		for(int i=0;i<=s-1;i++){
			if(a[i]<min){
				min=a[i];
			}
	
		}
		printf("\nMinimum value is:%d",min);
}
void maximu_array(int a[],int s){
		int max=a[0];
		for(int i=0;i<=s-1;i++){
			if(a[i]>max){
				max=a[i];
			}
	
		}
		printf("\nMaximum value is:%d",max);
}












