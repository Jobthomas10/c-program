/* Author:Job Thomas Cherian
   Date:07/02/25
   program to transporse the matrix*/
#include<stdio.h>
int main(){
 int row, col;
 printf("Enter the rows and column\n");
 scanf("%d%d",&row,&col);

 int matrix[row][col];
 printf("Enter the first matrix\n");
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&matrix[i][j]);
  }
  
 }  
 printf("actual matrix\n");
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
   printf("%d\t",matrix[i][j]);
   }
   printf("\n");
  }
  printf("transporse of the matrix\n");
  for(int i=0;i<col;i++){
   for(int j=0;j<row;j++){
   printf("%d\t",matrix[j][i]);
   }
   printf("\n");
  }
  return 0;
}
