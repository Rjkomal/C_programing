// <----------------------------Question_1.11-------------->
#include<stdio.h>
#include<math.h>
int main(){
  int x1, y1, x2, y2;
  float d;
  
  printf ("\n <---Program to calculate distance between two points A & B-->");
  printf ("\n Enter the coordinates of point A (as (x1, y1))--> ");
  scanf ("(%i,%i)",&x1, &y1);
  
  printf ("\n Enter the coordinates of point B (as (x2, y2))-->");
  scanf ("(%i,%i)",&x2, &y2);
  
  
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  
  printf("\n The distance between the point A(%i,%i) and B(%i,%i) is  %.2f",x1,y1,x2,y2,d) ;
  printf ("\n <---------------END------------>\n");
  
} 

