#include<stdio.h>
 int power(int b,int e){
 if (e==0){
   return 1;
 }
 else {
  return b*power(b,e-1);
  
 }
 return 0;
}
int main() {
 int base,exponent,result;
 printf("enter the base\n");
 scanf("%d",&base);
 printf("enter the exponent\n");
 scanf("%d",&exponent);
 power(base,exponent);
 result=power(base,exponent);
 printf("the result is %d\n",result);
 return 0;
} 
 
