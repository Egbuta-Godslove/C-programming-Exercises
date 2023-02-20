//Generic pointer is an Empty pointer whose return type is valid and due to void return type it can point to any type of data suchas int,char,structure e.t.c.

#include <stdio.h>

void main () {
int a = 4;
/*following is the generic pointer which can point to any type ofdata */

void *p;
p=&a;
/*following is slight different in acccessing the value at generic pointer p i.e you have to provide the type like *(int *)p
*/
  printf("The value is %d", *(int *)p);

  return 0;
}
