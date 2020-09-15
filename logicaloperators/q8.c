#include<stdio.h>
int main(){
	int stock,qty_ord,crd_scr,req_cscr;
	printf("Enter Stock in the company:\n");
	scanf("%d",&stock);
	printf("Enter Quantity in the company:\n");
	scanf("%d",&qty_ord);
	puts("Enter the customer credit score:");
	scanf("%d",&crd_scr);
	puts("Enter required credit score:");
	scanf("%d",&req_cscr);
	
	if(req_cscr <= crd_scr){
		if (stock >= qty_ord)
			puts("Rerquirement will be supplied");
		else
			puts("Supply all that we have in stock nad remaining will be supplied later");
	}
	else
		puts("The customer has a low credit score so soory");
	return 0;
}
