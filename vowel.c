#include<stdio.h>
void main()
{
char ch;
int lowercase_Vowel,uppercase_Vowel;
printf("please Enter an alphabet: \n");
scanf("%d",&ch);
lowercase_Vowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
uppercase_Vowel = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
if(lowercase_Vowel || uppercase_Vowel)
{
printf("\n %c is a Vowel." ,ch);
}
else
{
printf("\n %c is a consonant.",ch);
}
return 0;
}
