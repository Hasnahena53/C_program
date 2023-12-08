/** * C program to check a  number is palindrome or not using recursion */
#include <stdio.h>
 #include <math.h>
 int reverse(int num);
 int main()
 { int num, rev;
  printf("Enter any number: ");
scanf("%d", &num);
 	 rev = reverse(num);
    if(rev==num)
 printf("%d is palindrome ",num);
    else
    printf("%d is not palindrome",num);
     return 0; }
int reverse(int num)
 { int k=num,digit = (int) log10(k);
 if(k== 0)
return 0;
return ((k%10 * pow(10, digit)) + reverse(k/10));
     }
