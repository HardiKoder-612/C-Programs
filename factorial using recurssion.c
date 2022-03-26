/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int fact(int);

int main()

{

	int n,ans;

printf("enter n");	

scanf("%d",&n);

ans=fact(n);

printf("%d",ans);

}

int fact(int n)

{

if(n==1)

return 1;

else

return(n*fact(n-1));

}
