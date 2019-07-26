#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,s,d[10],j,z;
	printf("enter size \n");
	scanf("%d",&s);
	printf("enter number of digits\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	z=0;
	while(1)
	{
	if(z<n)
	{
		switch(d[z])
		{
			case 1:for(i=0;i<s;i++)
					printf("|\n");
				printf("\n");
				for(i=0;i<s;i++)
					printf("|\n");
				break;
			case 2: for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}

				 for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				for(i=0;i<s;i++)
				{
					printf("|\n");
				}
				 for(i=0;i<s;i++)
					printf("-");
				printf("\n");

				break;
			case 3:
				for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}

				 for(i=0;i<s;i++)
					printf("-");
				 printf("\n");
				 for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				break;
			case 4:
			       for(i=0;i<s;i++)
					printf("|\n");
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				printf("\n");
				break;
			case 5:
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
					printf("|\n");
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				for(i=0;i<s;i++)
					printf("-");
				break;
				printf("\n");
			case 6:
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
					printf("|\n");
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
			       {
					printf("|");
					for(j=0;j<s;j++)
					{
						printf(" ");
					}
					printf("|");
					printf("\n");
			       }
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");

			       break;
			case 7:
				for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				printf("\n");
				for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				break;
			case 8:
				for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				for(i=0;i<s;i++)
			       {
					printf("|");
					for(j=0;j<s;j++)
					{
						printf(" ");
					}
					printf("|");
					printf("\n");
			       }
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
				for(i=0;i<s;i++)
			       {
					printf("|");
					for(j=0;j<s;j++)
					{
						printf(" ");
					}
					printf("|");
					printf("\n");
			       }
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       break;
			case 9:
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
			       {
					printf("|");
					for(j=0;j<s;j++)
					{
						printf(" ");
					}
					printf("|");
					printf("\n");
			       }
			       for(i=0;i<s;i++)
					printf("-");
			       printf("\n");
			       for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
						printf(" ");
					printf("|\n");
				}
				for(i=0;i<s;i++)
					printf("-");
				printf("\n");
				break;
                    default: printf("invalid");
                               break;

			}
			z++;
		}

		else
			exit(0);
	}

}


