#include<stdio.h>
#include<conio.h>
#include<math.h>
int T,E,M,S,SS,Tot,Roll;
float avg;
char stud_name;
void main()
{
 clrscr();
 printf("Enter the student name : ");
 scanf("%c",&stud_name);
 printf("Enter Student Roll no : ");
 scanf("%d\n",&Roll);
 printf("Enter the 5 marks : ");
 scanf("%d%d%d%d%d",&T,&E,&M,&S,&SS);
 Tot=T+E+M+S+SS;
 printf("Total marks : %d\n",Tot);
 avg=Tot/5;
 printf("Average : ");
 scanf("%f\n",avg);
 getch();
}