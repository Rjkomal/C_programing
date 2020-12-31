#include<stdio.h>
int main()
{ char name[20],city[20],Char;
  int dno,stno,pcode;
do {
  printf("\n <---------Welcome--------->");
  printf("\n It is a address printing program ");
  printf("\n Enter your name ---->");
  scanf("%s",&name[20]);
  printf("\n Enter your door no.---->");
  scanf("%d",&dno);
  printf("\n Enter your street no.---->");
  scanf("%d",&stno);
  printf("\n Enter your city name---->");
  scanf("%s",&city[20]);
  printf("\n Enter your pin code---->");
  scanf("%d",&pcode);
  
  printf("\n\t <--------Your address is --------->");
  printf("\n\t %s",&name[20]);
  printf("\n\t %d,street no.%d",dno,stno);
  printf("\n\t %s - %d",&city[20],pcode);
  printf("\n\t <-----------END----------------->");
 
  printf("\n You want to enter a new address?(y or n)--------->");
  scanf("%s",&Char);
}
while(Char=='y'||Char=='Y');
return 0;
} 
