/*Check Number is prime,armstrong or perfect */
#include<stdio.h>
#include<math.h>
int checkPrime(int num);
int checkarmstrong(int num);
int checkPerfect(int num);


int main(){
int num;
printf("Enter a value and check number is prime ,armstrong or prime\n");
printf("Enter any numbe:");
scanf("%d",&num);
checkPrime(num);
checkarmstrong(num);
checkPerfect(num);
printf("\nProgram End");


}






int checkPrime(int num){
     int  i, flag = 0;

    for (i = 2; i <= num / 2; ++i) {

        // condition for non-prime
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        printf("");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("");
    }

    return 0;
}

///check armstrong
int checkarmstrong(int num){


   int check, rem, sum = 0;

   check = num;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == num)
      printf("%d is an armstrong number.\n", num);




}





///check perfect
int checkPerfect(int num){
 int i, Sum = 0 ;
 for(i = 1 ; i < num ; i++)
  {
   if(num % i == 0)
     Sum = Sum + i ;
  }

 if (Sum == num)
    printf("\n %d is a Perfect Number", num) ;
 else
    printf("") ;

return 0 ;

}
