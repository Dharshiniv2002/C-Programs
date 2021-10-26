#include<stdio.h>
#include<conio.h>
int a,b,temp;
void main()
{
clrscr();
printf("Values before swapping \n");
printf("value of a and b: \n");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("Values after swapping \n");
printf("%d \n%d \n",a,b);
getch();
}
