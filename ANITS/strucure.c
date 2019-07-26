#include <stdio.h>
#include<string.h>
struct book {
	int id:
	char author[50];
	char subject[50];
	
};
int main(int argc, char **argv)
{
	int num;
	char a[50];
	char s[50];
	struct book book1;
	printf("Enter Book Deatails id ,author&subject&");
	scanf("%d",&num);
	gets(a);
	gets(s);
	strcpy(book1.id,num);
	strcpy(book1.author,a);
	strcpy(book1.subject,s);
	printf( "Book 1 title : %s\n", book1.id);
	 printf( "Book 1 author : %s\n",book1.author);
	 printf( "Book 1 subject : %s\n", Book1.subject);

	
	
	return 0;
}

