/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{

  int i;

  int a[5] = {1, 2, 3, 4, 5};

  int *p = &a[0];   

  for (i = 0; i < 5; i++,p++)

  {

    printf("%d at %u\n ",*p,p);

     

  } 

  return 0;

}