/**  C program to find sum of digits of any number using recursion */
#include <stdio.h>
 #include <math.h>
 int sum(int num);
 int main()
 { int num, digitsum;
  printf("Enter any number: ");
scanf("%d", &num);
 	 digitsum= sum(num);
 printf("sum  of  %d = %d", num, digitsum); return 0; }
int sum(int num)
 {
 if(num == 0)
return 0;
return (num%10 + sum(num/10));
     }
