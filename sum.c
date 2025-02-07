/* Author:Job Thomas Cherian
   Date:07/02/25
   program to find the sum of two matrix*/
#include<stdio.h>
int main(){
 int row, col;
 printf("Enter the rows and column\n");
 scanf("%d%d",&row,&col);

 int matrix1[row][col],matrix2[row][col];
 printf("Enter the first matrix\n");
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&matrix1[i][j]);
  }
 }  
  printf("enter the second matrix\n");
  for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
   scanf("%d",&matrix2[i][j]);
   }
  }
  printf("the sum of the matrix is:\n");
  int matrix3[row][col];
  for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    printf("%d\t",matrix3[i][j]);
   }
   printf("\n");
  } 
  
  return 0;
}
