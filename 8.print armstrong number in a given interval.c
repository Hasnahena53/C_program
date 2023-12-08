//print armstrong number in a given interval
#include <stdio.h>
void tori (int,int);
int main()
{
    int n1,n2;
    printf("Enter M to N number for armsrong Number \n");
    printf("Enter M And N:");
    scanf("%d%d",&n1,&n2);
    tori(n1,n2);


 }void tori(int x,int y)
{
    int t,sum=0,i,r;
    for(i=x;i<y;i++){
        int t=i;
        sum=0;
    while(t>0){
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }if(sum==i)
    {
        printf("%d is armstrong Number\n",i);
    }
     }


}
