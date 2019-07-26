//~ 1).strcpy
//~ 2).strrev
//~ 3).strlen
//~ 4).strupr
//~ 5).strlwr
//~ 6).strcat
//~ 7).strcmp
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	//char s;
	//scanf("%s",a);
	fgets(a,sizeof(a),stdin);
	
	//scanf("%c",&s);
	for(int i=0;i!='0';i++){
		//printf("real ->%c\n",a[i]);
		if((a[i]>='a')&&(a[i]<='z')){//.a
			printf("%c",a[i]-32);
		}
		else if((a[i]>='A')&&(a[i]<='Z')){
			printf("%c",a[i]+32);
		}
	}
	printf("\n");
	return 0;
}
