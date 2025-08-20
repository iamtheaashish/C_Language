// # include <stdio.h>

// int main() {
//     printf("Hello, I am learning C with Harry\n");
//     return 0;
// }

// First, a C program is written in a code editor,
// then it is compiled in C Compiler (gcc)
// Finally, the executable is run to see the output.

// # include <stdio.h>
// int main() {
//     int a = 4;
//     float b = 5.5;
//     char c = 'A';
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %2f\n", b); // %2f means that the float will be printed with 2 digits after the decimal
//     printf("The value of c is: %c\n", c);
//     return 0;
// }


// # include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);    //& is the address operator. Supplied value should be copied to the address which is variable a
//     printf("The value that you provided is %d\n", a);
// }

// # include <stdio.h>
// int main() {
//     int a = 10;
//     int b = 15;
//     printf("Area of rectangle is %d\n", a*b);
//     return 0;
// }

// # include <stdio.h>
// int main() {
//     int a , b ;
//     // Enter value of length
//     printf("Enter Length: ");
//     scanf("%d", &a);
//     // Enter value of breadth
//     printf("Enter Breadth: ");
//     scanf("%d", &b);
//     // Output
//     printf("The Area of Rectangle is: %d\n", a*b);
//     return 0; // We write return 0 to indicate that the program ended successfully
// }

// # include <stdio.h>
// int main(){
//     int r;
//     float area;
//     printf("Enter radius of circle: ");
//     scanf("%d", &r);

//     area = 3.14285714286 * r * r;
//     printf("Area of Circle is: %f\n", area);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int r, h;
//     float volume;
    
//     printf("Enter radius of cylinder: ");
//     scanf("%d", &r);

//     printf("Enter height of cylinder: ");
//     scanf("%d", &h);

//     volume = 3.14285714286 * r * r * h;
//     printf("Volume of Cylinder is: %f\n", volume);
//     return 0;
// }


// Celcius to Fahrenheit
// F = (9/5 * C) + 32

// # include <stdio.h>
// int main(){
//     // initializing variables with values
//     int celcius;
//     int fahrenheit;
//     // user input
//     printf("Enter temperature in Celcius: ");
//     scanf("%d", &celcius);

//     fahrenheit = ( 1.8 * celcius ) + 32;
//     printf("Temperature in Fahrenheit is equal to: %d\n", fahrenheit);
//     return 0;
// }

// Simple Interest Formula
// SI = ( P * R * T ) / 100
//  # include <stdio.h>
//  int main(){
//     float principal, rate_of_interest, time_period, simple_interest, amount;
//     char ask_2_show_amount;
//     // Input
//     printf("Enter the Principal Amount: ");
//     scanf("%f", &principal);

//     printf("Enter the Rate of Interest: ");
//     scanf("%f", &rate_of_interest);

//     printf("Enter the Time Period in Years: ");
//     scanf("%f", &time_period);

//     // Calculation
//     simple_interest = ( principal * rate_of_interest * time_period ) / 100;
//     amount = simple_interest + principal;
//     // Output
//     printf("Simple Interest is: %f\n", simple_interest);

//     printf("Do you also want to see total payable amount? Answer with 'y' or 'n': ");
//     scanf(" %c", &ask_2_show_amount);

//     if (ask_2_show_amount == 'y') {
//         printf("The total payable amount is: %f\n", amount);
//     } else {
//         printf("Okay, not showing the total payable amount.\n");
//     }

//     return 0;
//  }








































