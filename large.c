#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number");
scanf("%d\n%d\n%d\n",&a,&b,&c);
if((a>b)&&(a>c))
printf("A is a greater");
else if((b>a)&&(b>c))
printf("B is greater");
else
printf("C is greater");
return 0;
}
