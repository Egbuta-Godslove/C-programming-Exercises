// Write a C program to print a message "Hello World i am in!"with the Help of goto keyword?



#include <stdio.h>

void main() {
int i;

for(i=0; i<=10; i++){
goto glcode;
printf("\n%d",i);

glcode:printf("\nHello world i'm in!");

}
return (0);

}
