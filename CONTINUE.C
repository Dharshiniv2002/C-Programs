#include<stdio.h>
#include<conio.h>
int a=1;
int b,d;
char c;
void main()
{
 clrscr();
 printf("Enter the two numbers : \n");
 scanf("%d%d",&a,&b);
 printf("Enter the choice : \n");
 scanf("%s",&c);
//*************************************************************************
for(a=0;a<20;a++)
 {
   if(a==8)
   {
   continue;
   }
 printf("%d \n",a);
 }
//**************************************************************************
getch();
}