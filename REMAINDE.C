// 5. Write a prorgam using recursive function to find remainder when
// a positive integer n is divided by a positive integer m
#include<stdio.h>
#include<conio.h>
int rem(int, int);
int main()
{
 int n1, n2;
 clrscr();
 printf("Enter two numbers : ");
 scanf("%d %d", &n1, &n2);
 printf("%d divided by %d gives remainder : %d",n1, n2, rem(n1, n2));
 getch();
 return 0;
}
int rem(int a, int b)
{
 if(a < 0 || b < 0)
  exit(0);
 if(a < b)
  return a;
 return rem(a-b, b);
}