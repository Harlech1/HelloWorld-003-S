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
    scanf("%d %d", &b, &c);
    a = b * c;
    printf("This program performs a sample payroll calculation.\n");
    */
    /*
    int x = 2;

    printf("x=");
    */

    /*
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
     
     */
    
    // soldaki mekana ne koyarsan koy yazdırdığı şey o geliyo aralara virgül koyarsan onları da koyuyo %d yer tutucu sırasıyla alıyo
    
    /*
    
    printf("%d,%d,%d,%d\n", 1, 2, 3, 4);

    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");
     
     */
    /*
    int num1, num2;
    printf("Enter two integers\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2) {
        printf("%d is larger", num2);
    }
    
    if (num1 > num2) {
        printf("%d is larger", num1);
    }
    
    if (num1 == num2) {
        printf("These numbers are equal.");
    }
     */
    
    /*
    int num1, num2, num3;
    int smallest, largest;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Sum is %d\n", num1+ num2+ num3);
    printf("Average is %d\n",(num1+ num2+ num3)/3);
    printf("Product is %d\n", num1* num2* num3);
    */
    
    
    /*             en küçüğü bulma yöntemi(türker versiyonu) //türker versiyonunda 3 tane şeyi check ediyon diğerinde 2(?)
    if(num1 < num2 && num1 < num3) {
        printf("Smallest is %d\n", num1);
    }
    if(num2 < num1 && num2 < num3) {
        printf("Smallest is %d\n", num2);
    }
    if(num3 < num2 && num3 < num1) {
        printf("Smallest is %d\n", num3);
    }
    */
    
    //       chatgpt versiyonu --- daha hoş gibi duruyor (karşılaştır performansı)
    /*
    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    printf("Smallest is %d\n", smallest);
    
    largest = num1;
    if( num2 > largest) {
        largest = num2;
    }
    if(num3 > largest) {
        largest = num3;
    }
    
    printf("Largest is %d\n", largest);
    */
    
    /*
    float pi = 3.14159;
    int radius;
    printf("Write down your radius: ");
    scanf("%d", &radius);
    printf("Diameter is %d\n", 2 * radius);
    printf("Circumference is %f\n", 2 * pi * radius);
    printf("Area of the circle is %f\n", pi * radius * radius);
     */
    /*
    printf("********\n");
    printf("*\t\t*\n");
     */
    
    //printf( "*\n**\n***\n****\n*****\n" );
    
    /*
    int num1, num2, num3;
    int smallest, largest;
    printf("Write down 3 integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    
    printf("Smallest number is: %d\nLargest number is: %d\n", smallest, largest);
     */
    
    
    /*
    int num;
    printf("Write down a number and i will find out if it is even or odd: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    }
    if (num % 2 == 1) {
        printf("%d is odd.\n", num);
    }
     */
    
    /*
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 % num1 == 0) {
        printf("Success! %d is a multiple of %d.\n", num1, num2);
    }
    */
    
    /*
    
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
     
     */
    
    printf("%d", 'A');
           
    
    



}
