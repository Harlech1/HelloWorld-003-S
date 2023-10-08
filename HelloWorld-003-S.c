/*
 ============================================================================
 Name        : HelloWorld-003-S.c
 Author      : Turker Kizilcik
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


//int main'deki int return'un çıktısını veriyor.
// void ise input'taki "doesnt recieve any information"
// printf teki f=formatted
//

int main(void) {
	//printf("Hello World");
	//printf("Welcome");
	//printf(" to C!\n");
	//printf("Welcome\nto\nC!\n");

	/*
	int integer1;
	int integer2;

	printf("Enter first integer\n");
	scanf("%d", &integer1);

	printf("Enter second integer\n");
	scanf("%d", &integer2);

	int sum;
	sum = integer1 + integer2;
	// veya int sum = integer1 + integer2

	printf("Sum is %d", sum);
	// veya sum yerine integer1 + integer2
	return 1;
	*/

	/*
	printf("Enter two integers and i will tell you\n");
	printf("the relationships they satisfy: ");

	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);

	if (num1 == num2) {
		printf("%d is equal to %d\n", num1, num2);
	}

	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	}

	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	}

	if (num1 < num2) {
		printf("%id is less than %d\n", num1, num2);
	}

	if (num1 <= num2) {
		printf("%id is less or equal to %d\n", num1, num2);
	}

	if (num1 >= num2) {
		printf("%id is greater or equal to %d\n", num1, num2);
	}
	*/

	//printf("Welcome");
	//printf("%s","Welcome");

	/*
	int c;
	int thisVariable;
	int q76354;
	int a;

	printf("Enter an integer: ");

	scanf("%d", &a);

	if (a != 7) {
		printf("The variable number is not equal to 7\n");
	}

	printf("This is a C program.\n");
	printf("This is a C\n");
	printf("program.\n");
	printf("This\nis\na\nC\nprogram.\n");
	printf("This\tis\ta\tC\tprogram.\t");

	*/

    /*
	int x, y, z;
	printf("Type 3 integers: ");
	scanf("%d %d %d", &x, &y, &z);

	int result = x * y * z;

	printf("The result is %d", result);
 
    */

	//added commit
	/*
	int a, b, c;

	printf("Enter two numbers: ");
	scanf("%d %d", b, c);
	a = b * c;
    printf("This program performs a sample payroll calculation.\n");
    */
    /*
    int x = 2;

	printf("x=");
	*/


    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Sum: %d\n", num1 + num2);

    printf("Product: %d\n", num1 * num2);

    printf("Difference: %d\n", num1 - num2);

    printf("Quotient: %d\n", num1 / num2);

    printf("Remainder: %d\n", num1 % num2);
	
	// soldaki mekana ne koyarsan koy yazdırdığı şey o geliyo aralara virgül koyarsan onları da koyuyo %d yer tutucu sırasıyla alıyo
	
	printf("%d,%d,%d,%d\n", 1, 2, 3, 4);

	printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");



}
