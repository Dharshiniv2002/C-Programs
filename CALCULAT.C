#include<stdio.h>
#include<conio.h>
int a,b,c,d,sum,sub,divide;
void main()
{
  clrscr();
  printf("Enter the 4 values: ");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  sum=a+b;
  sub=b-c;
  divide=c/d;
  printf("Sum is %d",sum);
  printf("Sub is %d",sub);
  printf("\n divide is %d",divide);
getch();
}