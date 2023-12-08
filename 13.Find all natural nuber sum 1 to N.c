/*Find all natural nuber sum 1 to N*/
#include<stdio.h>
 int natural_sum(int num);
 int main(){

 int num;
 printf("Enter 1 Yo N \n");
 printf("N:");
 scanf("%d",&num);
 natural_sum(num);
 }


 int natural_sum(int num){
 int sum=0;
 for(int i=1;i<=num;i++){

    sum=sum+i;
 }
 printf("Sum is = %d",sum);

 }
