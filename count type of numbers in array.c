/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[10],pcount=0,ncount=0,zcount=0;
   
    printf("Enter the array elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        pcount++;
        else if(a[i]<0)
        ncount++;
        else if(a[i]==0)
        zcount++;
    }
    printf("\nNumber of positive numbers are: %d",pcount);
    printf("\nNumber of negative numbers are: %d",ncount);
    printf("\nNumber of zeroes are: %d",zcount);
    return 0;

}
