/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<ctype.h>
int check(char );
int main()
{
    char ch;
    int f;
    printf("\nEnter the character: ");
    scanf("%c",&ch);
    ch=tolower(ch);
    f=check(ch);
    if(f==1)
    printf("\nVowel");
    else
    printf("\nConsonant.");
    return 0;
}
int check(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return 1;
    else
    return 0;
}
