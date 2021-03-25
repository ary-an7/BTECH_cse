#include<stdio.h>
#include<conio.h>
void main()
{
int digit,temp,num;
int rev=0;
printf("enter a valid integer number= ");
scanf("%d",&num);
temp = num;
while(num!=0)
{
digit = num % 10;
rev = rev * 10 + digit;
num = num / 10;
}
printf("the reversed no. of %d is = %d\n",temp,rev);

if(temp==rev)
    printf("the no. is palindrome\n");
else
    printf("the no. is not palindrome\n");
}
