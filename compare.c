#include<stdio.h>
#include<string.h>
int main(){
 char str1[20],str2[20];
 printf("enter the first string:\n");
 scanf("%s",str1);
 printf("enter the second string\n");
 scanf("%s",str2);

 if(strcmp(str1,str2)==0){
  printf("the string is equal");
 }else if(strcmp(str1,str2)>0){
 
 printf("The first string is greater.It is not equal");
 }else{
 printf(" the second string is greater.It is not equal");
 }
 
 
return 0;
}
