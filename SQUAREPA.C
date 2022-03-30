#include<stdio.h>
#include<conio.h>
int i, j, N;
void main()
{
clrscr();
printf("Enter the number of rows : ");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
for(j=i;j<=N;j++)
{
printf("*");
}
printf("\n");
}
getch();
}