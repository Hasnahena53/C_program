//count total number of words in a string
#include <stdio.h>
 int main()
{ char str[200];
 int i, vowels, consonents;
printf("Enter any string: ");
 gets(str);
 i = 0;
vowels = 0;
consonents=0;
while(str[i] != '\0')
 {
 if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='E')
 vowels++;
else
consonents++;
i++; }
printf("Total number of vowels = %d \nand total number of consonents=%d", vowels, consonents);
return 0;}
