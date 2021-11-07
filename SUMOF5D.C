#include<stdio.h>
#include<conio.h>
int n,digit,temp;
int sum=0;
void main()
 {
  clrscr();
  scanf("%d",&n);
  temp=n;
//***************************************************************************
  while(temp>0)
    {
      digit=temp%10;
      sum=sum+digit;
      temp=temp/10;
    }
  printf("%d",sum);
  getch();
}