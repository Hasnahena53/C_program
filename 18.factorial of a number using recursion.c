//factorial of a number using recursion
#include <stdio.h>
 #include <math.h>
 int factorial(int num);
 int main()
 { int num,x;
  printf("Enter any number: ");
scanf("%d", &num);
 	 x= factorial(num);
    printf("%d",x);
     return 0; }
int factorial(int num)
 {
 if(num== 0)
return 1;
  else
return (num * factorial(num-1));
     }
