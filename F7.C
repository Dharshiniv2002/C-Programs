#include<stdio.h>
#include<conio.h>
int add();
int sub();
int a,b,c;
int temp;
void main()
  {
    printf("Enter the function : ");
    scanf("%d",&a);
    printf("Enter the two numbers : ");
    scanf("%d%d",&b,&c);
//**************************************************************************
if(a==1)
  {
    temp=add(b,c);
    printf("The addtion result is %d\n",temp);
  }
if(a==2)
  {
    temp=sub(b,c);
    printf("The subraction result is %d\n",temp);
  }
//**************************************************************************
 getch();
 }
//**************************************************************************
int add(int b, int c)
  {
    return b+c;
  }
int sub(int b, int c)
  {
    return b-c;
  }