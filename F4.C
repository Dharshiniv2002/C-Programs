#include<stdio.h>
#include<conio.h>
void name();
int a=24;
void main()
 {
   clrscr();
   name(a);
   getch();
}
void name(int a)
 {
   printf("%d",a);
 }