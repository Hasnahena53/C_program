///Concatenated two string
#include<stdio.h>
#include<string.h>
int main(){

char first[50];
char second[50];

printf("Enter first string:");
gets(first);
printf("Enter second string:");
gets(second);
printf("\n\n\nString concat first and second\n");

printf("Before concat string=%s\n",first);

strcat(first,second);


printf("After concat string=%s\n",first);

}
