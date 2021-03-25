#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,r1,r2,det,rp,ip;
printf("please enter coefficients a b c = ");
scanf("%f%f%f",&a,&b,&c);
det=b*b-4*a*c;
printf("DETERMINENT = %f ",det);
if(det>0)
{
r1 = (-b + sqrt(det)) / (2*a);
r2 = (-b - sqrt(det)) / (2*a);
printf("root1= %2f and root2= %2f",r1,r2);
}
else if(det==0)
   {
   r1 = r2 = -b/(2*a);
   printf("root1 = root2 = %2f",r1);
   }
else
   {
   rp = -b/(2*a);
   ip = sqrt(-det)/(2*a);
   printf("root1= %2f+%2f and root2= %2f-%2f",rp,ip);
   }
   getch();
   }
