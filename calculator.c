#include<stdio.h>
int main(){
float num1,num2;
char operator;
printf("enter first number:");
scanf("%f",&num1);
printf("enter second number:");
scanf("%f",&num2);
printf("choose the operator(+,-,*,/)");
scanf(" %c",&operator);
switch (operator){

   case '+':
    printf("Result: %.2f\n", num1 + num2);
    break;
   case '-':
   printf("Results:%2f\n",num1-num2);
   break;
   case '*':
   printf("Results:%2f\n",num1*num2);
   break;
   case '/':
   if (num2!=0){
   printf("result:%2f\n",num1/num2);
   }else {
   printf("error.Division by zero not allowed");
   }
   break;
    default:
   printf("error.Invalid operater");
   break;
  } 
  return 0;
}
