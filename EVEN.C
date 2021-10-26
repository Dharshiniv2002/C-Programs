#include<stdio.h>
#include<conio.h>
int a;
void main()
{
  clrscr();
  printf("Enter a : ");
  scanf("%d",&a);
  if(a%2==0)
   {
     printf("Even");
   }
  else
   {
   printf("Odd");
   }
getch();
}