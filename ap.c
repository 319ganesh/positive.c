#include<stdio.h>
int sum=0;
main()
{
int i,a,d,n,value;
printf("\n enter the initial value:");
scanf("%d",&a);
printf("\n enter the difference value:");
scanf("%d",&d);
printf("\n enter the final value:");
scanf("%d",&n);
printf("\n arithmetic progression");
value=a;
for(i=0;i<n;i++)
{
sum=sum+value;
value=value+d;
}
printf("\n the A.p is:%d",sum);
return 0;
}
