///Compare two string
#include<stdio.h>
#include<string.h>
int main()
{

    char first[50];
char second[50];
printf("Enter First string:");
gets(first);
printf("Enter second string:");
gets(second);

int count=strcmp(first,second);
if(count==0)
    printf("Two string is equal");
else
    printf("Two string is not equal");




}
