#include<stdio.h>
int main()
{
    int num=0,range;
    printf("Enter the range upto which fibonacci series to be printed: ");
    scanf("%d",&range);
    printf("\n0, ");
    for(int i=0;i<range;i++)
    {num=num+i;
     printf("%d, ",num);
    }
    return 0;
}

