#include<stdio.h>
///9. Print all perfect number
int perfect(int a);

int main()
{
    int n;
  printf("Enter the value 1 to n\n");
  printf("n:");
  scanf("%d",&n);
  perfect(n);


}

///Function call
int perfect(int n){
int i,j,rem;
for(i=1;i<=n;i++){
        int sum=0;

   for(j=1;j<i;j++){
    rem=i%j;
    if(rem==0){
        sum=sum+j;
    }

   }
if(i==sum){
    printf("%d is perfect number\n",i);
}
}
return 0;
}
