#include<stdio.h>
#include<conio.h>
int user_input,temp,i;
void main()
{
	 clrscr();
	 printf("Enter the number: ");
	 scanf("%d",&user_input);
	 for(i=1;i<user_input+1;i++)
	 {
	    temp=user_input%i;
	    if(temp==0)
	    {
	       printf("The number %d is divisible by %d \n",user_input,i);
	    }

	 }
getch();
}
