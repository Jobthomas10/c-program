#include<stdio.h>
int main(){ 
  char str[20];
  int freq[25]=(0);
  int count=0;
  printf("Enter the string");
  fgets(str,sizeof(str),stdin);
  for(int i =0;str[i]='\0';i++){
   char ch=str[i];
   if (str[i]>='A' &&  str[i]<='Z'){
    ch=ch+32;
   }
   if(ch>='a' && ch<='z'){
    freq[ch-97]++;
  }
 }
 for(int i=0;i<25;i++){
  if(freq[i]!=0){
   printf("%c:%d\n",i+97,freq[i]);
  }
 }
 return 0;
}  
