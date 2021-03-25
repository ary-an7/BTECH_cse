#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i;
float fact,t,x,sinx=0;
printf("Enter the value of x in degrees \n");
scanf("%f",&x);
printf("enter the value of n \n");
scanf("%f",&n);
x = x * (3.14/180.0);
t=x;
sinx=x;
for(i=1;i<=n;i++)
{
fact = 2*n*(2*n+1);
t = -t * x * x / fact;
sinx = sinx + t;
}
printf("sum of series sin(%d) = %f\n",t,sinx);
getch();
}
