// 1. Wrrite a Program using function to find factorial of a number.
#include<stdio.h>
#include<conio.h>
long int fact(unsigned int);
int main()
{
 unsigned int num;
 clrscr();
 printf("Enter the Number : ");
 scanf("%u", &num);
 printf("Factorial of %d is %ld", num, fact(num));
 getch();
 return 0;
}
long int fact(unsigned int n)
{
 if(n == 0 || n == 1)
  return 1;
 return (n * fact(n-1));
}