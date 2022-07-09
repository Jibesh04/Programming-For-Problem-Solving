// 6. Write a program using recursive function to reverse a number.
#include<stdio.h>
#include<conio.h>
unsigned int rev(unsigned int);
int main()
{
 unsigned int num;
 clrscr();
 printf("Enter the number : ");
 scanf("%u", &num);
 printf("The reversed number is : %u", rev(num));
 getch();
 return 0;
}
unsigned int rev(unsigned int n)
{
 static ans = 0;
 if(n == 0)
  return ans;
 ans = ans * 10 + (n % 10);
 return rev(n/10);
}