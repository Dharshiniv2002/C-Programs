#include<stdio.h>
#include<conio.h>
int i,num, sum=0;
void main()
{
clrscr();
printf("Enter the number : ");
scanf("%d", &num);
for(i=1;i<num;i++);
{
if(num%i==0)
{
sum = sum+i;
}
}
if(sum==num)
{
printf("\n %d is a perfect number",num);
}
else
{
printf("\n %d is not a perfect number", num);
}
getch();
}


