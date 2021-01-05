// <----------------------------Question_1.10-------------->
#include<stdio.h>
#include<math.h>
int main(){
  int a, b, c;
  float s, area;
  
  printf ("\n <----------------Program to calculate the area of triangle-------->\n");
  printf ("Enter the length of side a(in cm.)----->");
  scanf ("%i",&a);
  printf ("\nEnter the length of side b(in cm.)----->");
  scanf ("%i",&b);
  printf ("\nEnter the length of side a(in cm.)----->");
  scanf ("%i",&c);
  
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c)) ;
  
  printf ("\n The area of triangle is  %.2f sq.cm.\n ",area );
  printf("\n <-------------------------END--------------------->\n");

}
