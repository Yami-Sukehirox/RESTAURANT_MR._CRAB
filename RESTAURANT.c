#include <stdio.h>

int main () {
	
	int choice, quantity, again;
	float total = 0;
	float payment, change;

	do {
	
	printf ("\n==========MR. CRAB RESTAURANT============\n");
	
	printf ("\n-----MENU-------\n");
	printf ("\n1. Garlic Butter - $50");
	printf ("\n2. Mud Crabs - $70");
	printf ("\n3. Butter Shirmp - $99");
	printf ("\n4. Sizzling Squid - $234");
	printf ("\n5. Crispy Pata - $576");
	printf ("\n6. Checkout");
	
	printf ("\nEnter your order: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			printf ("Quantity: ");
			scanf ("%d", &quantity);
			total = total + (50 * quantity);
			printf ("\nGarlic Butter added\n");
			break;
	
		case 2:
			printf ("Quantity: ");
			scanf ("%d", &quantity);
			total = total + (70 * quantity);
			printf ("\nMud Crabs added\n");
			break;
		
		case 3:
			printf ("Quantity: ");
			scanf("%d", &quantity);
			total = total + (99 * quantity);
			printf ("\nButter Shrimp added\n");
			break;
		case 4: 
			printf ("Quantity: ");
			scanf ("%d", &quantity);
			total = total + (234 * quantity);
			printf ("\nSzilling Squid added\n");
			break;
		case 5:
			printf ("Quantity: ");
			scanf ("%d", &quantity);
			total = total + (576 * quantity);
			printf ("\nCrispy pata added\n");
			break;
		case 6:
			printf ("\n========= RECEIPT ==========\n");	
			printf ("Total: $%.2f\n", total);
			
			printf ("Enter the payment: $\n");
			scanf("%f", &payment);
			
			if (payment >=total) {
				change = payment - total;
				
				printf ("Payment: $%.2f\n", payment);
				printf ("Change: $%.2f\n", change);
				
				printf ("==========================\n");
				printf ("\nThank you for odering!\n");
			}
			else {
				printf ("Insufficient payment!\n");
			}
			break;
		}

}while (choice != 6);
	
	return 0;
}