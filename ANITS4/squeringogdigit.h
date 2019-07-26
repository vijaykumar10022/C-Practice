int reverse(int n){
	int rev=0;
	while(n)//n!=0
	{	rev=rev*10;
		rev=rev+n%10;
		//rev=rev*10+n%10;//
		n=n/10;
	}
return rev;	
}
void sq(int l){
	printf("%d",l*l);
}
void squiring(int rev){
	while(rev){
		int last=rev%10;
	switch(last){
		case 0:printf("0");break;
		case 1:printf("1");break;
		case 2:printf("4");break;
		case 3:sq(last);break;
		case 4:sq(last);break;
		case 5:sq(last);break;
		case 6:sq(last);break;
		case 7:sq(last);break;
		case 8:sq(last);break;
		case 9:sq(last);break;
	}
		rev=rev/10;
	}
	printf("\n");
}
