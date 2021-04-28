#include <stdio.h> 
#include <stdlib.h>
#include <iostream>

struct node 
{ 
int n;
struct node *next;
};
struct node *head = NULL, *tail, *curr;

void insertAkhir(int n); 

main()
{
	system("color a");
	int n, x;

	printf("\t\t ===Welcome===\n");
	printf(" Masukkan Jumlah Node Yang Ingin Ditambah : ");
	scanf("%d", &n); 
	if ((n>2)&&(n<=5))
	{
	
	while(n-- > 0) 
	{
		printf(" Masukkan Data Yang Ingin Dimasukkan Ke Dalam Node : ");
		scanf("%d", &x); 
		insertAkhir(x);
	}	
	printf(" Data linked list: "); 
	curr = head;
	while(curr != NULL )
	{
		printf("%d ",curr->n); 
		curr = curr->next;
	}
	printf("\n");
	
	printf("\n\t\t===Thank youuu===\n");

	}
	else if(n<=2)
	{
		printf(" Banyaknya Data Yang Anda Masukkan Kurang Memenuhi Persyaratan \n");
	}
	else if(n>5)
	{
		printf(" Banyaknya Data Yang Anda Masukkan Melebihi Batas \n");
	}
	system("PAUSE"); 
	return 0;
}


void insertAkhir(int n)
{
	curr = (struct node *)malloc(sizeof(struct node)); 
	curr->n = n;
	if ( head == NULL )
	{
		head =tail = curr; 
	}
	else
	{
		tail->next = curr; 
		tail = curr;
	}
	tail ->next = NULL; 
}
