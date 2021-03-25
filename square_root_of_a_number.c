#include<stdio.h>
#include<conio.h>
void main()
{
float n,s;
int i=0;
printf("enter the no. to find square root = ");
scanf("%f",&n);
if(n>0)
{
s=n/2;
for(i=0;i<n;i++)
s=(s+(n/s))/2;
printf("square root of %f is %f \n",n,s);
}
else
printf("not possible to find square root");
getch();
}
