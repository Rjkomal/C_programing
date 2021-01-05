// <----------------------------Question_1.7-------------->
#include<stdio.h>

void  add(int, int) ;
void  sub(int, int) ;
int main()
{
  int a=20, b=10, result;
  printf("\n<----------------------------------------->");
  add(a, b);
  sub(a, b);
  printf ("\n <--------------------------END------------->");
}

void add(int x, int y)
{
  printf ("\n %i  +  %i  = %i",x,y,x+y);
}
void sub(int x, int y)
{
  printf ("\n %i  -  %i  = %i",x,y,x-y);
}
