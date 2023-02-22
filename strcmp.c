//C Code implement String Compare Function
#include <stdio.h>
#include <string.h>

void main() {

char s1[30],s2[30];
int c;

printf("Enter first string: ");
gets(s1);
printf("Enter second string: ");
gets(s2);

c=strcmp(s1,s2);
if(c==0){
printf("The string are equal");    
}else
printf("The strings are not equal");
    return 0;
}
