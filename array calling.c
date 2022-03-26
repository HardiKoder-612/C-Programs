/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void sum(int [],int);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter the array elements \n ");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    sum(a,size);
    return 0;
}
void sum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    printf("\nSum of array elements is: %d",sum);
}