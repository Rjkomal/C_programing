 // <----------------------------Question_1.12-------------->
#include<stdio.h>
#include<math.h>
int main()
{
  int x, y;
  float radius, C,area;
  
  printf ("\n <----Program to compute area and circumference of circle---->\n");
  printf ("\n Enter any point (x,y) on the circumference of the circle with radius (0,0) ---->");
  
  scanf("%d %d",&x,&y);
  
  radius=sqrt(x*x+y*y);
  
  C=2*3.14*radius;
  area=3.14*radius*radius;
  
  printf ("\n ........\n Radius of circle is  %.2f unit ", radius);
  printf ("\n Circumference --> %.2f unit\t Area---> %.2f sq.unit\n",C,area);
  printf ("\n <--------------End-------------->\n");
}
