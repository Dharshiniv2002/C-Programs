#include<stdio.h>
#include<conio.h>
int user_input,i,temp;
void main()
{
 clrscr();
 printf("Enter the number : ");
 scanf("%d",&user_input);
//****************************************************************************
 for(i=1;i<user_input+1;i++)
 {
   temp = user_input % i;
   if(temp==0)
   {
     printf("The number is %d is divisible by %d \n ",i,user_input);
     }
 }
//***************************************************************************
getch();
}