#include<stdio.h> 
#include<conio.h> 
unsigned int rightshift(unsigned int, unsigned int); 
void main() 
{ 
int x,x1,n; 
printf("\n C program to develop a function rightshift(x,n) in C that returns the value of the"); 
printf("\n integer x rotated to the right by n bit positions as an unsigned integer. Invoke the"); 
printf("\n function from the main with different values for x and n and print the results with"); 
printf("\n suitable headings"); 
printf("\n Enter the value of x (unsigned integer only)"); 
scanf("%u",&x); 
printf("\n\n Enter the no of bits x will rotate right (n)"); 
scanf("%u",&n); 
x1 = rightshift(x,n); // function call 
printf("\n\n After rotating %d bits to the right, %u become ??%u", n, x, x1); 
getch(); 
}

unsigned int rightshift(unsigned int x,unsigned int n) 
{ 
unsigned int i,y;
for(i=1;i<=n;i++)
y=x>>i;
return(y); 
} 
