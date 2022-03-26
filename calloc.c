/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr;
   int n,i;
   printf("\nEnter n: ");
   scanf("%d",&n);
   
   ptr=(int *)calloc(5,n);
   if(ptr==NULL)
   exit(0);
   else
   printf("\nMemory allocated");
   printf("\nEnter array:\n");
   for(int i=0;i<n;i++)
   scanf("%d",(ptr+i));
   printf("\nEntered array is: \n");
   for(int i=0;i<n;i++)
   printf("%d ",*(ptr+i));
   return 0;
}
