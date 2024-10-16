#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo (int a,int b)
{
	return (a+b);
}

int square (int n)
{
   return(n*n);
}

int get_max (int x,int y)
{
	if (x>y) 
	return (x);
	else
	return (y);
}

int main(int argc, char *argv[]) {
	int input_one,input_two;
	int result_sumTwo,result_square,result_getmax;
	
	printf("Enter the integers:");
	scanf("%i %i",&input_one,&input_two);
	
	result_sumTwo=sumTwo(input_one,input_two);
	result_square=square(input_one);
	result_getmax=get_max(input_one,input_two);
	
	printf("Result - Sum : %i, Square : %i, Max : %i",result_sumTwo,result_square,result_getmax);
	
	
	
	return 0;
}