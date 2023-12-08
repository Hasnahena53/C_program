//febonacii series till n terms using recursion
#include <stdio.h>
 #include <math.h>
 int febonacii(int a,int b, int num);
 int main()
 { int num,sum,a,b;
 a=0,b=1;
  printf("Enter total number of terms:\n ");
scanf("%d", &num);
printf("febonacii series is:");
    printf("%d  %d",a,b);
    febonacii(a,b,num-2);
     return 0; }
int febonacii(int a,int b,int num)
 { int sum;
 if(num>0)
{sum=a+b;
  printf(" %d ",sum);
 a=b;
 b=sum;
 febonacii(a,b,num-1);}
     }
