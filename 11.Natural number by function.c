/*Natural number 1 to N*/

#include<stdio.h>
int natural(int n);
main(){
    int num;
printf("Enter the value 1 to N\n");
printf("N:");
scanf("%d",&num);
natural(num);
}
int natural(num){

for(int i=1;i<=num;i++){
    printf("%d,",i);
}
}
