#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("\n enter the value of a:");
scanf("%d",&a);
if(a>0)
{
printf("\n the number is positive",a);
}
else if(a==0)
{
printf("\n zero");
}
else
{
printf("\n the number is negative");
}
getch();
return 0;
}
