#include <stdio.h>
#include <math.h>
int main() {
   char operator;
   double num1, num2, result;

   printf("Enter an operator (+, -, *, / ");
   scanf("%c", &operator);

   switch(operator) {
      case '+':
      case '-':
      case '*':
      case '/':
         printf("Enter the first number: ");
         scanf("%lf", &num1);

         printf("Enter the second number: ");
         scanf("%lf", &num2);

         switch(operator) {
            case '+':
               result = num1 + num2;
               printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
               break;

            case '-':
               result = num1 - num2;
               printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
               break;

            case '*':
               result = num1 * num2;
               printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
               break;

            case '/':
               if (num2 == 0) {
                  printf("Error! Division by zero is not allowed.");
               } else {
                  result = num1 / num2;
                  printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
               }
               break;
         }
        
   }

   return 0;
}