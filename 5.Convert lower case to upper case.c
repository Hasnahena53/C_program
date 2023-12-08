///Convert lower case to upper case
#include<stdio.h>
#include<string.h>
int main(){

char first[50];


printf("Enter a string:");
gets(first);


printf("\n\n\nString lower case to upper case\n");



strupr(first);


printf("%s\n",first);

}
