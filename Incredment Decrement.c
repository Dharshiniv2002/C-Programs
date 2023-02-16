#include<stdio.h>
#include<conio.h>
int x, y, z;
void main()
{
printf("Input the value of X : ");
scanf("%d", &x);
printf("\nInput the value of Y : ");
scanf("%d", &y);
printf("\nInput the value of Z : ");
scanf("%d", &z);

++x;
y++;
z++;

printf("The updated value of X is : %d", x);
printf("\nThe updated value of Y is : %d", y);
printf("\nThe updated value of Z is : %d", z);
}
