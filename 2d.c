/* Author:Job Thomas Cherian
   Date:07/02/25
   program to print 2d array*/
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
  printf("the matrix is:\n");
  for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
   return 0;
}
