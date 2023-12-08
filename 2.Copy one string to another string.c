///Copy one string to another string
#include<stdio.h>
#include<string.h>
int main(){

char first[50];
char second[50];

printf("Enter first string:");
gets(first);
printf("Enter second string:");
gets(second);
printf("String copy first to second\n");
printf("Before copy string=%s\n",second);

strcpy(second,first);


printf("After Copy string=%s\n",second);

}
