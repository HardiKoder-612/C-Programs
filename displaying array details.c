/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("Enter array elemets:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("My array elemenst are:\n");
	for(i=0;i<=4;i++)
	{
		printf("a[%d] is %d at address %u\n",i,a[i],&a[i]);
	}
	
}