///Find length of a string
#include<stdio.h>
#include<string.h>
int main(){

char ch[100];
printf("Enter a string:");
gets(ch);

int number=strlen(ch);
printf("The length is =%d",number);

}
