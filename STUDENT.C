#include<stdio.h>
#include<conio.h>
char a;
int rollno,age,i;
void main()
{
clrscr();
printf("Enter the student details \n");
for(i=0;i<=60;i++)
{
printf("Enter the student name: \n");
scanf("%s",&a);
printf("Enter the roll no: \n");
scanf("%d",&rollno);
printf("Enter the age: \n");
scanf("%d",&age);
}
getch();
}
