#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clr scr();
printf("Enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is the greatest");
else if(b>c)
printf("b is the greatest");
else
printf("c is the greatest");
getch();
}
