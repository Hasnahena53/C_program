/*Reverse any number*/
#include<stdio.h>
int reverse(int);
int main(){
    int num;
printf("Enter a number for reverse:");
scanf("%d",&num);
printf("\nBefore Reverse=%d\n",num);
reverse(num );
}
int reverse(int num ){
int rev,sum=0;
while(num!=0){

    rev=num%10;

    sum=(sum*10)+rev;
    num/=10;
}
printf("after reverse =%d",sum);
}
