#include<stdio.h>
int main()
{
int a,b,i;
scanf("%d%d",&a,&b);
printf("Display the numbers between %d and %d:",a,b);
for(i=0;i<b;i++)
if(i%2==0)
printf("%d",i);
return 0;
}
