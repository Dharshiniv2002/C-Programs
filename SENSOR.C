#include<stdio.h>
#include<conio.h>
int sensor;
int b=1;
void main()
 {
   clrscr();
   while(b)
   {
     printf("Enter the sensors data : ");
     scanf("%d%d",&sensor,&b);
     printf("%d\n",sensor,b);
     printf("The for loop condition is %d",b);
     getch();
     }
 }