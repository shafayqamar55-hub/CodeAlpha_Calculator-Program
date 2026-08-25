#include<stdio.h>
int main()
// Code Alpha Internship Task-1
{
    //Basic Calculator
   int a;


   printf("Enter the 1st number:");

   scanf("%d", &a);

   int b;

   printf("Enter the 2nd number:");

   scanf("%d", &b);

   int c;

   printf(" 1 for Addition \n 2 for Subtracton \n 3 for Multiplication \n 4 for Division \n ");

    printf("Enter the Choice:");
   scanf("%d", &c);


   switch (c)
   {
    case 1:
    printf("Result=%d",a+b);
    break;
   
    case 2:
    printf("Result=%d",a-b);
    break;

    case 3:
    printf("Result=%d",a*b);
    break;

    case 4:
    printf("Result=%d",a/b);
    break;

   default:
   printf("Invlalid Choice");
   break;
   }
}
