/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{ int num,pcount=0,ncount=0,zcount=0;
printf("Enter the number: ");
    scanf("%d",&num);
  while(num!=-1)
  {printf("Enter the number: ");
    scanf("%d",&num);
    if(num>=0)
    {
        if(num>0)
        pcount++;
        else
        zcount++;
    }
    else
    ncount++;
  }
  printf("\nNumber of positive numbers: %d",pcount);
  printf("\nNumber of negative numbers: %d",ncount);
  printf("\nNumber of zeroes: %d",zcount);
return 0;
}