# include<stdio.h> 
# include<conio.h> 
int isprime(int); // function prototype 
// Main program 
void main() 
{ 
// Variable declaration
 int num, res,a,b,i,f=0; 
// Statements and expressions 

printf("\n C program to develop a function isprime(x) that accepts an integer argument and");
printf("\n returns 1 if the argument is prime and 0 otherwise"); 
printf("\n It that invokes this function to generate prime numbers between the given range"); 
printf("\n Enter the range of integer number to generate prime numbers: "); 
scanf("%d%d",&a,&b); 
for(i=a; i<=b;i++) 
{ 
res = isprime(i); // function call 
if ( res == 1) 
{ 
printf("\t%d",i); 
f=1; 
} 
} // end for if(f==0) 
printf("No prime numbers exists\n"); 
getch(); 
}
int isprime(int n) 
{ 
int j; 
for(j = 2 ; j<= n / 2 ;j++) 
{ 
if ( n % j == 0) 
return 0; // not a prime number 
}
return 1;
}
