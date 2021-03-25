#include<stdio.h> 
#include<conio.h>
void main() 
{ 
char str1[100],str2[100];
int i; 
printf("Enter any string str1: "); 
scanf("%s",str1); 
for(i=0;str1[i]!='\0';i++) 
str2[i]=str1[i]; 
str2[i]='\0'; 
printf("After copying str1 to str2, the value of str2 is: %s",str2);
getch(); 
}
