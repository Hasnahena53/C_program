/*Sum of all even or odd number*/
#include<stdio.h>
int sum_odd_even(int,int);
int main(){

int num1,num2;

printf("Enter Range M to N\n");
printf("Enter M:");
scanf("%d",&num1);

printf("Enter N:");
scanf("%d",&num2);

sum_odd_even(num1,num2);

}
int sum_odd_even(int num1,int num2){
int sum1=0,sum2=0,i;
for (i=num1;i<=num2;i++){
    if(i%2==0){
        sum1+=i;
    }else{

    sum2+=i;
    }

}
printf(" all even number sum =%d\n",sum1);
printf(" all odd number sum =%d\n",sum2);

}
