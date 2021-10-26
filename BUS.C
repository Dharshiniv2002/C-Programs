#include<stdio.h>
#include<conio.h>
float time;
void main()
{
  clrscr();
  printf("Enter the time: ");
  scanf("%f",&time);
  printf("%f",time);
//*************************************************************************
if(time==7.00)
  {
  printf("Arrived on time");
  }
else if(time<7.00)
  {
  printf("Arrived Early");
  }
else
  {
  printf("Bus Delayed");
  }
//**************************************************************************
getch();
}