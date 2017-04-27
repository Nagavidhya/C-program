#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,pf=0;
clrscr();
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
pf==0;
break;
}
}
if(pf==1)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
getch()
}
