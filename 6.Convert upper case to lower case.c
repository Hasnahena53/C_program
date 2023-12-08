///Convert upper case to lower case
#include<stdio.h>
#include<string.h>
int main(){

char first[50];


printf("Enter a string:");
gets(first);


printf("\n\n\nString upper case to lower case\n");



strlwr(first);


printf("%s\n",first);

}
