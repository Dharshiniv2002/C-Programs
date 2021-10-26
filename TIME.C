#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
 {
  time_t tm;
  time(&tm);
  printf("%s",ctime(&tm));
  getch();
  clrscr();
 }