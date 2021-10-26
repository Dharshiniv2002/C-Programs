#include<stdio.h>
#include<conio.h>
int a=1;
int b,d;
char c;
void main()
{
 while(a)
 {
   clrscr();
   printf("Enter the two numbers : \n");
   scanf("%d%d",&a,&b);
   printf("Enter the choice : \n");
   scanf("%s",&c);
//**************************************************************************
   switch(c)
   {
    case'a':
      printf("Addition \n");
      d=a+b;
      printf("The answer is : %d\n",d);
      break;
    case'b':
      printf("Subraction \n");
      d=a-b;
      printf("The answer is : %d\n",d);
      break;
    default:
      printf("ERROR");
   }
//**************************************************************************
getch();
}
}