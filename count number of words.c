/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    int l,count=0;
    char str[20];
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        count=count +2;
    }
    printf("\nThe number of words are: %d",count);
    return 0;
}