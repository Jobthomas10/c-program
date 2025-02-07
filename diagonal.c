/* Author:Job Thomas Cherian
   Date:07/02/25
   program to print the sum of diagonal*/
#include<stdio.h>
int main(){
  int row,col;
  printf("Enter the row and columns\n");
  scanf("%d%d",&row,&col);
  printf("Enter the elements\n");
  int matrix[row][col];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    } 
  }
  int sum=0;
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
     if (i==j){
      sum= sum +matrix[i][j];
      printf("%d",sum);
      
     }
    }
   }
  printf("the matrix is:\n");
  for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
  }
    return 0;
}
