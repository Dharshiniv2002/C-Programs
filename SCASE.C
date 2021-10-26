#include<stdio.h>
#include<conio.h>
int a,b,c;
void main()
{
 clrscr();
 printf("Enter the numbers : \n");
 scanf("%d%d",&a,&b);
 printf("Ente the choice : \n");
 scanf("%d",&c);
//*************************************************************************
switch(c)
 {
   case 1:
     printf("Addition %d",a+b);
     break;
   case 2:
     printf("Subraction %d",a-b);
     break;
   case 3:
     printf("Multiplicarion %d",a*b);
     break;
   case 4:
     printf("Division %d",a/b);
     break;
 }
//****************************************************************************
getch();
}
