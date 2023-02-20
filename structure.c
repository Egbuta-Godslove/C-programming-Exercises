/*C Code to implement structure
*/
/* write a C program with the Help of structure which stores the information about a book such as Book_name, author, no_of_pages, price etc. 
*/

#include <stdio.h>
struct book {
    char book_name[10];
    char author[10];
    int no_of_pages;
    float price;
};
int main() {
   struct book b;
   printf("\nEnter the name of the book,author,no_of pages and price: ");
scanf("%s %s %d %f", &b.book_name,&b.author,&b.no_of_pages,&b.price);
printf("\nThe name of the book is %s\n the author is %s\n the page is %d\n the price is %2.f",b.book_name,b.author,b.no_of_pages,b.price);
    return 0;
}
