// write a c program to find the smallest number from two numbers entered through the keyboard//
#include <stdio.h>
int main () {
		    
		int a,b;
			printf("Enter value for a & b respectively: ");
				scanf("%d %d", &a,&b);

					if(a==b){
								    printf("Both a & b are Equal");
								    	}
						else if(a<b){
									    printf("B is Greater");
									    	}
							else
									{
												    printf("A is Greater");
												    	}
								    return 0;
}

