#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int a,b,i;
char* represent[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void main()
{
  clrscr();
  scanf("%d\n %d",&a,&b);
  for(i=a;i<=b;i++)
   {
     if(i>9)
      {
	if(i%2==0)
	printf("Even\n");
	else
	printf("odd\n");
      }
       else
       {
	 printf("%s\n",represent[i]);
       }
   }
   getch();
}

