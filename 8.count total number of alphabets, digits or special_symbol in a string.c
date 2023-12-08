//count total number of alphabets, digits or special_symbol in a string
#include <stdio.h>
 int main()
{ char str[200];
 int i, alphabets,digits,special_symbols;
printf("Enter any string: ");
 gets(str);
 i = 0;
alphabets= 0;
digits=0;
special_symbols=0;
while(str[i] != '\0')
 {
 if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
 alphabets++;
else if(str[i]>='0' && str[i]<='9')
digits++;
else
special_symbols++;
i++; }
printf("Total number of alphabets = %d \nand total number of digits=%d \nand total number of special_symbols =%d", alphabets, digits, special_symbols);
return 0;}
