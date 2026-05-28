#include"header.h"
int main()
{
	st *head=0;
	while(1)
	{
		printf("1.addproduct\n");
		printf("2.view product\n");
		printf("3.search product\n");
		printf("4.update product\n");
		printf("5.delete product\n");
		printf("6.billing system\n");
		printf("7.exit\n");
		int op;
		printf("enter the option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:add_product(&head);
			       break;
			case 2:view_product(head);
			       break;
			case 3:search_product(head);
			       break;
			case 4:update_product(head);
			       break;
			case 5:delete_product(&head);
			       break;
			case 6:billing(head);
			       break;
		        case 7:exit(0);
		}
	}
}
void add_product(st **ptr)
{
	st *new;
	new=malloc(sizeof(st));
	printf("enter the id,name,quantity,price\n");
	scanf("%d%s%d%d",&new->id,new->name,&new->quantity,&new->price);
	new->next=*ptr;
	*ptr=new;
	printf("product added successfully\n");
}
void view_product(st *ptr)
{
	if(ptr==0)
	{
		printf("there are no products\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %d %d\n",ptr->id,ptr->name,ptr->quantity,ptr->price);
		ptr=ptr->next;
	}
}
void search_product(st *ptr)
{
	int i,j;
	char s[20];
	printf("enter the product name\n");
	scanf("%s",s);
	while(ptr)
	{
		if(strcmp(s,ptr->name)==0)
		{
			printf("product is found\n");
		return;
		}
				ptr=ptr->next;
	}
}
void update_product(st *ptr)
{
       char s[20];
       int flag=0;
       printf("enter the product name to update the details\n");
       scanf("%s",s);
       while(ptr)
       {
	       if(strcmp(s,ptr->name)==0)
	       {
		       flag=1;
		printf("update the product id ,product quantity and product price\n");
		scanf("%d%d%d",&ptr->id,&ptr->quantity,&ptr->price);
		 printf("product updated\n");
		 return;
	       }
	    ptr=ptr->next;
       }
       if(flag==0)
	printf("product is not found\n");
}
void delete_product(st **ptr)
{
	 int n;
	 st *del=*ptr;
	 st *prev=0;
	 printf("enter the  product id\n");
	 scanf("%d",&n);
	 while(del)
	 {
		 if(del->id==n)
		 {
			 if(prev==0)
			 {
				 *ptr=del->next;
			 }
			 else
			 {
				 prev->next=del->next;
			 }
			 free(del);
			 printf("product deleted successfully\n");
			 return;
		 }
		 prev=del;
		 del=del->next;
	 }
	 printf("product not found\n");
}
void billing(st *ptr)
{
	int id, qty;
	float total = 0;
	int found = 0;

	printf("enter product id for billing\n");
	scanf("%d", &id);

	while(ptr)
	{
		if(ptr->id == id)
		{
			found = 1;

			printf("enter quantity to buy\n");
			scanf("%d", &qty);

			if(qty > ptr->quantity)
			{
				printf("not enough stock available\n");
				return;
			}

			total = qty * ptr->price;
			ptr->quantity -= qty;

			printf("\n===== BILL =====\n");
			printf("Product: %s\n", ptr->name);
			printf("Quantity: %d\n", qty);
			printf("Price per item: %d\n", ptr->price);
			printf("Total Amount: %.2f\n", total);
			printf("================\n");

			return;
		}

		ptr = ptr->next;
	}

	if(!found)
	{
		printf("product not found\n");
	}
}
