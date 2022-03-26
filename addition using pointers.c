/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("\nEnter number a and b: ");
    scanf("%d%d",p,q);
    printf("\nSum is: %d",*p+*q);
    return 0;
}
