/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int ch;
    do{
        int c;
    float num1,num2;
    printf("\nEnter your chice:\n1. For Addition\n2. For Subtraction\n3. For multiplication\n4. For division \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("\nEnter the numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nSum of the numbers is: %.2f",num1+num2);
                break;
        case 2: printf("\nEnter the numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nDifference of the numbers is: %.2f",num1-num2);
                break;
        case 3: printf("\nEnter the numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nProduct of the number is: %.2f",num1*num2);
                break;
        case 4: printf("\nEnter the numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nQuestiont of the numbers is: %.2f",num1/num2);
                break;
        default: printf("\nWrong choice entered.");
                    
    }
    printf("\nPress 1 to continue.");
    scanf("%d",&ch);
    }while(ch==1);
    printf("\nThank you for using our calculator.");
    return 0;
}