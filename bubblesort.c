#include<stdio.h>
int main(){
  int i, n, limit;
  printf("enter the limit\n");
  scanf("%d",&limit);
  int array[limit];
  printf("enter the elements\n");
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
      if (array[j]>array[j+1]){
      int temp = array[j];
      array[j]=array[j+1];
      array[j+1]=temp;
      }
    }
  }
  printf("\n the sorted array\n");
  for(i=0;i<limit;i++){
     printf("%d\t",array[i]);
  }
  return 0;
 }
    
