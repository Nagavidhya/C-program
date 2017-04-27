#include<stdio.h>
#include<conio.h>
void main()
{
long long num;
int a;
clrscr();
scanf("%lld",&num);
while(num!=0)
{
num=num/10;
a++;
}
printf("%d",&a);
getch()
}
