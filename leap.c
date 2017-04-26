#include<stdio.h>
int main()
{
int a;
printf("Enter the year");
scanf("%d",&a);
if((a%=4)||(a%=100)||(a%=400))
printf("%d the year is leap year",a);
else
printf("%d the year is not leap year",a);
return 0;
}
