//~ -->==Comparision
//~ -->=Assigning

#include<stdio.h>
int main()
{
	int ID;
	printf("Enter ID To login:");
	scanf("%d",&ID);
	if(ID==100)
	{
		printf("Enter Password:");
		int psw;
		scanf("%d",&psw);
		if(psw==1234)
		{
			printf("Your Entered User ID %d and Password %d is Correcr\n",ID,psw);
		}
		else
		{
			printf("Password is incorrect\n");
		}	
	}
	else
	{
		printf("Your Enterd ID %d is Incorrect",ID);
	}
	return 0;
}
