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


Execrise 2:-

// write a C program with the Help of string handing functions to check whether the password entered through keyboard is right or wrong ?
#include <stdio.h>
#include <string.h>

void main() {
    int p;
   char p1[4],p2[10];
   printf("Enter your four digit password:");
   gets(p1);
   printf("confirm your password once again:");
   gets(p2);

   p=strcmp(p1,p2);
   if(p==0){
       printf("Correct password");
   }else
    printf("Incorrect password");


    return 0;
}

