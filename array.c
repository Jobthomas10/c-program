  #include<stdio.h>
  int main(){
    int n,i,key,limit;
    printf("enter the number of limit:\n");
    scanf("%d",&limit);
    int num[limit];
    printf("enter the elements:\n");
    for(i=0;i<limit;i++){
      scanf("%d",&num[i]);
    }
    printf("enter the key to search:\n");
    scanf("%d",&key);
    for(i=0;i<limit;i++){
      if (num[i]==key){
        printf("key is found");
        }
      else{
        printf("key is not found");
        } 
     }
     return 0;
  }
     
