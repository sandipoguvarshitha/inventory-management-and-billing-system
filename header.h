#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct product
{
	 int id;
	 char name[20];
	 int quantity;
	 int price;
	struct product *next;
}st;
void add_product(st **);
void view_product(st *);
void search_product(st *);
void update_product(st *);
void delete_product(st **);
void billing(st *);
