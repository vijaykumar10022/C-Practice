#include<stdio.h>
int main()
{
	int tot;
	printf("enter the number of days");
	scanf("%d",&tot);
	printf("Year ->%d\nWeeks ->%d\nDays ->%d\n",tot/365,(tot%365)/7,(tot-((tot/365)*365+((tot%365)/7)*7)));
	
	return 0;
}
