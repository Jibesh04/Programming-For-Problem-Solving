// 7. Write a program using recursive function to count all the prime
// numbers, even numbers between p and q (both inclusive)
#include<stdio.h>
#include<conio.h>
int isPrime(int);
int primectr(int, int);
int evenctr(int, int);
int main()
{
 int p, q;
 clrscr();
 printf("Enter the two numbers : ");
 scanf("%d %d", &p, &q);
 printf("Count of Prime numbers : %d", primectr(p, q));
 printf("\nCount of Even numbers : %d", evenctr(p, q));
 getch();
 return 0;
}
int isPrime(int n)
{
 int i, ctr = 0;
 for(i = 1; i <= n/2; i++)
 {
  if(n%i == 0)
   ctr++;
 }
 if(ctr == 1 && n != 1);
  return 1;
 return 0;
}
int primectr(int a, int b)
{
 if(a == b + 1)
  return 0;
 if(isPrime(a) == 1)
  return (1 + primectr(a+1, b));
 return primectr(a+1, b);
}
int evenctr(int a, int b)
{
 if(a == b + 1)
  return 0;
 if(a%2 == 0)
  return (1 + evenctr(a+1, b));
 return evenctr(a+1, b);
}
