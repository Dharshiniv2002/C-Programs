#include<stdio.h>
#include<conio.h>
void add();
int a,b;
void main()
 {
   clrscr();
   scanf("%d%d",&a,&b);
   add(a,b);
   getch();
 }
void add(int a, int b)
 {
   int c=a+b;
   printf("%d",c);
 }