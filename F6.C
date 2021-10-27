#include<stdio.h>
#include<conio.h>
int add();
int a,b,e;
void main()
  {
    clrscr();
    scanf("%d%d",&a,&b);
    e=add(a,b);
    printf("%d",e);
    getch();
  }
int add(int a,int b)
 {
   int c=a+b;
   return c;
 }