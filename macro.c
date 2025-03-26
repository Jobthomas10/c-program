#include<stdio.h>
#define pi 3.14
int main(){
 float area,radius,height,area1;
 printf("enter the radius");
 scanf("%2f",&radius);
 printf("enter the height");
 scanf("%2f",&height);
 area=pi*radius*radius;
 area1 =2*pi*(radius+height);
 printf("area of the circle is%2f\n",area);
  printf("area of the cylinder is%2f\n",area1);
 return 0;
 }

