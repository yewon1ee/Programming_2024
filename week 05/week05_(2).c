#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int result_add,result_sub,result_mul,result_div,result_rem;
	printf("Input two integers: ");
	scanf("%i %i",&a,&b);
	result_add=a+b;
	result_sub=a-b;
	result_mul=a*b;
	result_div=a/b;
	result_rem=a%b;
	
	printf("+ result is %i\n - result is %i\n * result is %i\n / result is %i\n %% result is %i\n",result_add,result_sub,result_mul,result_div,result_rem);
	
	
	
	
	
	
	return 0;
}