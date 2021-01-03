// <--------------------------Question_1.5------------------>
#include<stdio.h>
#define PI 3.14
int main(void)
{
  int radius;
  float area;
  
  printf ("\n Enter the radius of circle(in cm.) ---------->");
  scanf("%i",&radius);
  
  area= PI * radius * radius;
  printf ("\a\n The area of circle of radius %i cm is %.2f sq.cm. \n",radius,area);
  
}
