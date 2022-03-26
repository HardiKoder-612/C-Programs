/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main()

{

  int a=5;

  int *p=&a;

  int **q=&p;

  printf("%d\n",a);

  printf("%d\n",*p);

  printf("%d\n",**q);

  printf("%u\n",*q);

  printf("%u\n",&a);

  printf("%u\n",p);

}