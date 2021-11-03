#include<stdio.h>
#include<conio.h>
int i,j;
int n=5;
void main()
{
 clrscr();
 for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
     {
      printf("*");
     }
    printf(" \n");
  }
 getch();
}