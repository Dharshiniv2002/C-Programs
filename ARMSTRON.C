#include<stdio.h>
#include<conio.h>
int n,r,sum,temp;
void main()
{
   clrscr();
   printf("Enter the number :  ");
   scanf("%d",&n);
   temp=n;
//*************************************************************************
while(n>0)
    {
      r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
    }
if(temp==sum)
 {
    printf("Armstrong number");
 }
else
 {
    printf("Not Armstrong number");
 }
getch();
}
