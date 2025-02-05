#include<stdio.h>
int main(){
  int i,limit,largest,smallest,largest_position=0,smallest_position=0;
  printf("enter the limit\n");
  
  scanf("%d",&limit);
  int num[limit];
  printf("enter the elements\n");
  for(i=0;i<limit;i++){
   scanf("%d",&num[i]);
  }
  largest=num[0];
  smallest=num[0];
  
  for(i=1;i<limit;i++){

    if(largest<num[i]){ 
        largest=num[i];
        largest_position=i;
    }
    if (smallest>num[i]){
         smallest=num[i];
         smallest_position=i;
    }
  }
   printf("The position of %d is %d\n",largest,largest_position+1);
   printf("The position of %d is %d\n",smallest, smallest_position+1);
   return 0;
   }
   
