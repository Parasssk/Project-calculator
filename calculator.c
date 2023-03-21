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
//   this is add operator
            case '+':
               result = num1 + num2;
               printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
               break;
//    this is subtract operator

            case '-':
               result = num1 - num2;
               printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
               break;
//     this is multiplication operator
            case '*':
               result = num1 * num2;
               printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
               break;
//     this is division operator
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
         break;

      case '%':
         printf("Enter the first number: ");
         scanf("%lf", &num1);

         printf("Enter the second number: ");
         scanf("%lf", &num2);

         if (fmod(num1, num2) == 0) {
            printf("%.2lf is divisible by %.2lf", num1, num2);
         } else {
            printf("%.2lf is not divisible by %.2lf", num1, num2);
         }
         break;

      case '^':
         printf("Enter the base: ");
         scanf("%lf", &num1);

         printf("Enter the exponent: ");
         scanf("%lf", &num2);

         result = pow(num1, num2);
         printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
         break;

      case 's':
         printf("Enter the number: ");
         scanf("%lf", &num1);

         if (num1 < 0) {
            printf("Error! Square root of a negative number is not allowed.");
         } else {
            result = sqrt(num1);
            printf("Square root of %.2lf = %.2lf", num1, result);
         }
         break;

      default:
         printf("Error! Invalid operator.");
   }

}
