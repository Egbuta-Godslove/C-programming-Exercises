//C Code to Read Characters from a file
#include<stdio.h>

void main()

{

FILE *fp;

char ch;
fp=fopen("E:\my_name.txt","r");

if(fp==NULL)

{
printf(" The file does not exist !");
}

while(ch!=EOF)
{

ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);

return(0);
}

// C Code to Write characters to a File

#include<stdio.h>
void main(){
FILE *fp;
char ch;

fp=fopen("C:\student.txt","w");

printf("Enter Character Until you want and If you want to Quit press q ");

while(1)

{

scanf("%c",&ch);

fputc(ch,fp);

if(ch=='q')

break;

}

fclose(fp);

return(0);

}


