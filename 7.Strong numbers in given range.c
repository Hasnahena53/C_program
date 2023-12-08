/**
 * Strong numbers in given range
 */

#include<stdio.h>

int strong(int a,int b);
main()
{
    int number,YYY;
    printf("Enter range X to Y\n");
    printf("X:");
    scanf("%d",&number);///145

    printf("Y:");
    scanf("%d",&YYY);

    strong(number,YYY);

}

int strong(int number,int YYY){

int sum=0,n1,num,k;
    for(k=number;k<=YYY;k++){
        n1=k;
        int sum=0;
    while(n1!=0){
           int fact=1;
        num=n1%10;
        for(int i=1;i<=num;i++ ){

            fact=fact*i;
        }
        sum=sum+fact;

        n1/=10;

    }
    if(k==sum){
        printf("%d is strong number!\n",k);
    }else{
       printf("%d is not strong number!\n",k);
    }
    }
}



