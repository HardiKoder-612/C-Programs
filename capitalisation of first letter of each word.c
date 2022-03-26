/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

**********************************************************************
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[30];
    printf("Enter the string: ");
    gets(s);
    s[0]=toupper(s[0]);
    for(int i=0;s[i]!='\0';i++)
    {
        
        if(s[i]==' ')
        s[i+1]=toupper(s[i+1]);
    }
    printf("\nString after updation: ");
    puts(s);
    return 0;
}
