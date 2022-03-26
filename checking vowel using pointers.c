/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>       
#include<ctype.h>
int main()
{
    char ch;
    char *c=&ch;
    printf("\nEnter the character: ");
    scanf("%c",c);
    *c=tolower(*c);
    if(*c=='a'||*c=='e'||*c=='i'||*c=='o'||*c=='u')
    printf("\nIt is a vowel.");
    else
    printf("\nConsonent.");
    return 0;
    
}
 