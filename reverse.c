#include <stdio.h>

int main(){
 char str[20];
 printf("Enter the string:");
 gets(str);
 int length;
 for(length=0;str[length]!='\0';length++);
 int i= length-1;
 for(int j=0;j<=length/2;j++){
 int temp=str[j];
  str[j]= str[i];
  str[i]=temp;
  i--;
  }
  printf("reversed string is: "); 
  puts(str);
  
  
 
 
  return 0;
}
