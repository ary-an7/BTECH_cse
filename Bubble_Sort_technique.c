#include<stdio.h>
#include<conio.h>
#include<float.h>
void main()
{
int array[100],n,c,d,swap;
printf("enter no. of elements \n");
scanf("%d",&n);
printf("enter %d integers \n",n);
for(c=0;c<n;c++)
{
printf("\narray[%d]= ",c);
scanf("%d",&array[c]);
}
for(c=0;c<n-1;c++)
{
for(d=0;d<n-c-1;d++)
{
if(array[d] > array[d+1])
{
swap = array[d];
array[d] = array[d+1];
array[d+1] = swap;
}
}
}
printf("sorted list in ascending order : \n");
for(c=0;c<n;c++)
printf("%d\n",array[c]);
getch();
}
