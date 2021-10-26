#include<stdio.h>
#include<conio.h>
int nos,i;
void main()
{
  clrscr();
  printf("Enter the computers : ");
  scanf("%d",&nos);
  printf("%d",nos);
//*************************************************************************
for(i=1;i<nos;i++)
  {
    printf("computer %d\n",i);
  }
//*************************************************************************
getch();
}