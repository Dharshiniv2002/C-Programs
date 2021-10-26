#include<stdio.h>
#include<conio.h>
int sensor;
void main()
{
  clrscr();
  printf("Enter the sensor data : ");
  scanf("%d",&sensor);
//**************************************************************************
if(sensor<10)
 {
   printf("Motor is on");
 }
else if(sensor>90)
 {
   printf("Motor is off");
 }
else
 {
   printf("Motor is running");
 }
//**************************************************************************
getch();
}