#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
 char ch;
 float num1,num2;
 printf("Enter what you want to do(D/M/A/S): ");
 scanf("%c",&ch);
 if(ch=='D')
 { float ques;
  printf("\nEnter the numbers: ");
  scanf("%f %f",&num1,&num2);
  ques=num1/num2;
  printf("\n%f / %f = %f",num1,num2,ques);
 }
 else if(ch=='M')
 {float mult;
 printf("\nEnter the numbers: ");
  scanf("%f %f",&num1,&num2);
  mult=num1*num2;
  printf("\n%f * %f = %f",num1,num2,mult);
 }
 else if(ch=='A')
 {float sum;
  printf("\nEnter the numbers: ");
  scanf("%f %f",&num1,&num2);
  sum=num1+num2;
  printf("\n%f + %f = %f",num1,num2,sum);
 }
 else
 { float diff;
  printf("\nEnter the numbers: ");
  scanf("%f %f",&num1,&num2);
  if(num1>num2)
   diff=num1-num2;
  else
   diff=num2-num1;
  printf("%f - %f = %f",num1,num2,diff);
  }
  getch();
 }
