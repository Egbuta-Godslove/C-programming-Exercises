// calculator using switch statement
#include <stdio.h>

int main() {
char operator;
printf("Enter an opeartor['+','-','*','/',]: ");
scanf("%c", &operator);
   
double num1,num2;
printf("\nEnter first number:");
scanf("%lf", &num1);
printf("\nEnter second number: ");
scanf("%lf", &num2);
   
double result;
switch(operator){
case '+':
result = num1+num2;
break;
case '-':
result = num1-num2;
break;
case '*':
result = num1*num2;
break;
case '/':
result = num1/num2;
break;
default:
printf("Invalid number");
}
printf("%.2lf", result);
return 0;
}
