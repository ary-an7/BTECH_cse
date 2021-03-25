#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<stdlib.h> 
void main() 
{ 
int n, i, mid, low, high; 
char name[100][100], key[100];
printf("\n C program to search a name in list of names using binary search"); 
printf("\n Enter the size of the array...:"); 
scanf("%d", &n); 
printf("\n Enter %d names in alphabetical order only", n); 
for(i = 0; i < n; i++) 
{ 
printf("\n\n name[%d]:",i); 
scanf("%s", name[i]); 
}// end for 
printf("\n\n Enter the name to be searched: "); 
scanf("%s", key); 
low=0; high=n-1; 

while ( low <=high) 
{ 
mid = (low+high)/2;
   if(strcmp(key,name[mid])==0) 
    break;  
else 
if(strcmp(key,name[mid])>0) 
  low = mid+1; 
else 
   high = mid-1; 

}
if(strcmp(key,name[mid])==0) 
   printf("\n\n Search Successful:%s found", key); 
else 
   printf("\n\n Search Unsuccessful:%s not found", key);
 getch(); 
}
