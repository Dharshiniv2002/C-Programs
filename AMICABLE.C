#include<stdio.h>
#include<conio.h>
int i, num1, num2, sum1, sum2;
void main()
{
clrscr();
printf("Enter two Numbers : ");
scanf("%d %d", &num1, &num2);
for(i=1;i<num1;i++)
{
if(num1%i==0)
{
sum1=sum1+i;
}
}
for(i=1;i<num2;i++)
{
if(num2%i==0)
{
sum2=sum2+i;
}
}
if((num1==sum2)&&(num2==sum1))
{
printf("%d and %d are amicable numbers\n", num1, num2);
}
else
{
printf("%d and %d are not are amicable numbers\n", num1, num2);
}
getch();
}
