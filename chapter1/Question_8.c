// <----------------------------Question_1.8-------------->
#include<stdio.h>
int main()
{
  int a, b, c;
  float x;
  
  printf ("\n<---------------Prigram to give the value of x = a/(b-c) --------->");
  printf ("\n Enter the value of a ---->");
  scanf ("%i",&a);
  printf("\n Enter the value of b ------>");
  scanf ("%i",&b);
  printf("\n Enter thr value of c ----->");
  scanf ("%i",&c);
  
  x=a/(b-c);
  
  printf("\n The value of x is %.2f",x);
  printf("\n <---------------------END---------->");
}