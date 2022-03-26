/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int num,rem,temp,temp2,arm=0,count=0;
    printf("Enter the number(3 digit): ");
    scanf("%d",&num);
    temp=num;
    temp2=num;
    while(temp2>0)
    {
        temp2/=10;count++;
    }
    while(num>0)
    {
        rem=num%10;
        arm=arm+pow(rem,count);
        num/=10;
    }
    if(arm==temp)
    printf("\nIt is an Armstrong number.");
    else 
    printf("\nIt is not an Armstrong number.");
   return 0;
}