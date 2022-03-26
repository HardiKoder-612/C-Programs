/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{   char s1[100]="programming ",s2[]="is awesome.";
    int length=0,j;
    while(s1[length]!='\0')
    length++;
    for(j=0;s2[j]!='\0';j++,length++)
    {
        s1[length]=s2[j];
    }
    printf("\nAfter concatenation: ");
    puts(s1);
    return 0;
}
