#include<stdio.h>

main()
{
char c;

printf("\n enter a letter:");
scanf("%c",&c);
if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
{
printf("\n the letter is an alphabet");
}
else
{
printf("\n it is not an alphabet");
}
  return 0;
}
