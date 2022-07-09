// 2. Write a function power(m,n) to calculate the value of
// m raised to the power n.
#include<stdio.h>
#include<conio.h>
long int power(int, int);
int main()
{
 int m, n;
 clrscr();
 printf("Enter the base : ");
 scanf("%d", &m);
 printf("Enter the power : ");
 scanf("%d", &n);
 printf("%d raised to the power %d gives: %ld", m, n, power(m,n));
 getch();
 return 0;
}
long int power(int a, int b)
{
 if(b==0)
  return 1;
 return (a * power(a, b-1));
}