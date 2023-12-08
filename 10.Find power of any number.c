#include <stdio.h>
///10.Find power of any number
int power(int n1, int n2);
int main() {
    int base, result,a;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive number): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
   if(base!=0){
     if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
   }else{

    return 0;
   }
}
