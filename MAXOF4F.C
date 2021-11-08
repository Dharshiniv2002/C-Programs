#include<stdio.h>
#include<conio.h>
int a,b,c,d;
int max=0;
int ans;
int max_of_four(int a, int b, int c, int d)
  {
    clrscr();
    if(max <= a) max=a;
    if(max <= b) max=b;
    if(max <= c) max=c;
    if(max <= d) max=d;
    return max;
  }
//**************************************************************************
void main()
 {
  scanf("%d %d %d %d",&a,&b,&c,&d);
  ans=max_of_four(a,b,c,d);
  printf("%d",ans);
  getch();
 }