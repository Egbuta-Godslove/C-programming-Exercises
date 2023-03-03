/*C Code to implement #if,#elif,#else,#endif
*/

#include<stdio.h>
#define Bsalary 45000

void main()

{


#if Bsalary <=15000

printf("The Employee is Belongs to Class C ");

#elif Bsalary>15000&&Bsalary<=25000

printf("The Employee is Belongs to Class B");

#else

printf("The Employee is Belongs to Class A");

#endif

return(0);

}
