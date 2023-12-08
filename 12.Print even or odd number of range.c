/*Print even or odd number of range*/
#include<stdio.h>
int even_odd(int,int);
int main()
{

   int num1,num2;
   printf("Enter M to N Number\n");
   printf("M:");
   scanf("%d",&num1);
    printf("N:");
   scanf("%d",&num2);
   even_odd(num1,num2);
}

int even_odd(int num1,int num2){

for(int i=num1;i<=num2;i++){

    int calculation=i%2;
    if(calculation==0){
        printf("%d is even number\n",i);
    }else{
        printf("%d is odd number\n",i);
    }
}



}
