// <----------------------------Question_1.9-------------->
#include<stdio.h>
void C_to_F(void );
void F_to_C(void );

int main()
{
  int choice;
  printf("\n <------This program is for conversion of Celcius and Fahrenheit ------>");
  printf("\n 1 > Convert Celcius to Fahrenheit \n 2 > Convert Fahrenheit to Celcius");
  printf ("\n Enter your choice (1 or 2) ------>");
  scanf ("%i",&choice);
  
  if (choice==1)
  {
    C_to_F();
  }
  else if (choice==2){
    F_to_C();
  }
 
  else {printf ("\n\a Wrong Choice!!!!!!! ");}
  
}

void C_to_F(){
  int temp;
  float new_temp;
  printf ("\n Enter the temperature in Celcius --------> ");
  scanf ("%i",&temp);
  new_temp=9*temp/5 + 32;
  printf ("\n Temperature in Fahrenheit is  %.2f\n ",new_temp);
}

void F_to_C(){
  int temp;
  float new_temp;
  printf ("\n Enter the temperature in Fahrenheit --------> ");
  scanf ("%i",&temp);
  new_temp=(temp - 32 ) * 5/9;
  printf ("\n Temperature in Celcius is  %.2f\n ",new_temp);
}
