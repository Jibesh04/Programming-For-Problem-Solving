// 3. Write a function that receives marks obtained by a student in three
// subjects and returns the average and percentage of these marks. Call
// this function from main() and print the result in main().
#include<stdio.h>
#include<conio.h>
float avg(int, int, int);
float per(int, int, int, int);
int main()
{
 int n1, n2, n3, t;
 clrscr();
 printf("Enter the three marks secured : ");
 scanf("%d %d %d", &n1, &n2, &n3);
 printf("Enter Full mark : ");
 scanf("%d", &t);
 printf("Average : %.2f", avg(n1, n2, n3));
 printf("\nPercentage : %.2f", per(n1, n2, n3, t));
 getch();
 return 0;
}
float avg(int a, int b, int c)
{
 return ((float)(a + b + c)/3.0);
}
float per(int a, int b, int c, int t)
{
 return (((float)(a + b + c)/(float)t) * 100.0);
}