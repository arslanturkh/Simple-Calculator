

#include <stdio.h>

int main() {
	
	int number1, number2; // numbers
	int i;
	float sonuc;
	char choice;
	
	printf("\n1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Remainder\n");
	printf("6. Power\n");
	printf("\n9. Exit\n"); 
	// to show operations
	
	printf("\nChoose an operation: ");
	scanf("%s", &choice); // to get choice
	
	while (choice!='9') {
		
		switch (choice) {
			
			case '1':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number
				
				sonuc = (float)number1 + number2;
				printf("\n%d + %d = %.2f\n", number1, number2, sonuc);
				break;
				// to calculate 1st operation
				
			case '2':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number
				
				sonuc = (float)number1 - number2;
				printf("\n%d - %d = %.2f\n", number1, number2, sonuc);
				break;
				// to calculate 2nd operation
				
			case '3':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number
				
				sonuc = (float)number1 * number2;
				printf("\n%d x %d = %.2f\n", number1, number2, sonuc);
				break;
				// to calculate 3rd operation
				
			case '4':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number 
				
				if (number2==0) { // for problem of x/0
					
					while (number2==0) {
						
						printf("\nSecond number cannot be zero!\n");
						printf("Enter second number again: ");
						scanf("%d", &number2);
						if (number2!=0) {
							
							sonuc = (float)number1 / number2;
							printf("\n%d / %d = %.2f", number1, number2, sonuc);
						} // end of second if
					} // end of the second while loop
				} // end of the if
				
				else {
					
					sonuc = (float)number1 / number2;
					printf("\n%d / %d = %.2f\n", number1, number2, sonuc);
				} // end of the else
				break;
				// to calculate 4th operation
				
			case '5':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number
				
				if (number2==0) { // for problem of x/0
					
					while (number2==0) {
						
						printf("\nSecond number cannot be zero!\n");
						printf("Enter second number again: ");
						scanf("%d", &number2);
						if (number2!=0) {
							
							sonuc = (int)number1 % number2;
							printf("\nsonuc = %.2f\n", sonuc);
						} // end of the fourth if
					} // end of the third while loop
				} // end of the third if
					
				else {
						
					sonuc = (int)number1 % number2;
					printf("\nsonuc = %.2f\n", sonuc);
				} // end of the second else
				break;
				// to calculate 5th operation
					
			case '6':
				printf("\n\nEnter first number: ");
				scanf("%d", &number1);
				// to get first number
				printf("\nEnter second number: ");
				scanf("%d", &number2);
				// to get second number
				
				sonuc = 1;
				for (i=1; i<=number2; i++) {
						
					sonuc = sonuc * number1;
				} // end of the for loop
					
				printf("\n%d ^ %d = %.2f\n", number1, number2, sonuc);
				break;
				// to calculate 6th operation
					
			default:
				printf("Wrong choice for operation!\n");
				printf("You can only choose\n1\n2\n3\n4\n5\n6\n9\n");
				break;
				// to catch other character
		} // end of the switch
		
	printf("\n1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Remainder\n");
	printf("6. Power\n");
	printf("\n9. Exit\n"); 
	// to show operations
	
	printf("\nChoose an operation: ");
	scanf("%s", &choice); // to get choice
	} // end of the while loop

printf("\n\n\nThe program finished succesfully...\n"); // when entered '9'

return 0; // finish
} // end of the program
