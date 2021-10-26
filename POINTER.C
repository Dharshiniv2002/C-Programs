#include<stdio.h>
#include<conio.h>
int a=50;
int *p=&a;
void main()
{
   clrscr();
   printf("%d",*p);
   printf("\n%x",p);
   getch();
}